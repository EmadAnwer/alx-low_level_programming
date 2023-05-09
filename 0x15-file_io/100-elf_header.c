#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
void magic(char *);
int class(char *);
void entry(char *, int, int);
int data(char *);
void version(char *);
void osabi(char *);
void abivers(char *);
void type(char *, int);
/**
 * main - check the code
 * @ac: arguments count
 * @av: arguments vactor
 * Return: 0 success Otherwise failed
 */
int main(int ac, char **av)
{
	int fd, nr, t_class, s_data;
	char buf[18];

	if (ac != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't open from file\n", 28);
		exit(98);
	}
	nr = read(fd, buf, 18);
	if (nr == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	magic(buf);
	t_class = class(buf);
	s_data = data(buf);
	version(buf);
	osabi(buf);
	abivers(buf);
	type(buf, s_data);
	lseek(fd, 24, SEEK_SET);
	read(fd, (char *) buf, t_class / 8);
	entry(buf, t_class, s_data);
	if (close(fd) == -1)
	{
		write(STDERR_FILENO, "Error: cannot close\n", 20);
		exit(98);
	}
	return (0);
}
/**
 * magic - print magic
 * @buf: ELF buffer
 */
void magic(char *buf)
{
	int i;

	if ((buf[0] != 127) || (buf[1] != 'E')
	|| (buf[2] != 'L') || (buf[3] != 'F'))
	{
		write(STDERR_FILENO, "Error: not ELF file\n", 20);
		exit(98);
	}
	printf("ELF Header:\n  Magic:  ");
	for (i = 0; i < 16; i++)
	{
		printf(" %.2x", buf[i]);
	}
	printf("\n");
}

/**
 * class - print magic
 * @buf: the ELF header
 * Return: 64 or 32
 */
int class(char *buf)
{
	printf("  %-35s", "Class:");

	if (buf[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buf[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buf[EI_CLASS]);
	return (32);
}
/**
 * abivers - print ELF ABI version
 * @buf: ELF buffer
 */
void abivers(char *buf)
{
	printf("  %-35s%u\n", "ABI Version:", buf[EI_ABIVERSION]);
}
/**
 * data - print ELF data
 * @buf: ELF buffer
 *
 * Return: 1 if big endian, otherwise 0
 */
int data(char *buf)
{
	printf("  %-35s", "Data:");

	if (buf[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buf[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * version - print ELF version
 * @buf: the ELF buffer
 */
void version(char *buf)
{
	printf("  %-35s%u", "Version:", buf[EI_VERSION]);
	if (buf[EI_VERSION] == EV_CURRENT && 1)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * osabi - print ELF OS/ABI
 * @buf: ELF buffer
 */
void osabi(char *buf)
{
	char *table[19] = {
		"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD",
		"UNIX - GNU", "<unknown: 4>", "<unknown: 5>", "UNIX - Solaris",
		"UNIX - AIX", "UNIX - IRIX", "UNIX - FreeBSD", "UNIX - Tru64",
		"Novell - Modesto", "UNIX - OpenBSD", "VMS - OpenVMS",
		"HP - Non-Stop Kernel", "AROS", "FenixOS",
		"Nuxi CloudABI", "Stratus Technologies OpenVOS"};
	printf("  %-35s", "OS/ABI:");
	if (buf[EI_OSABI] < 19)
		printf("%s\n", table[(unsigned int) buf[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buf[EI_OSABI]);
}
/**
 * type - print type
 * @buf: ELF buffer
 * @endian: endianness
 */
void type(char *buf, int endian)
{
	int type;

	char *table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};

	printf("  %-35s", "Type:");

	if (endian)
		type = 256 * buf[16] + buf[17];
	else
		type = 256 * buf[17] + buf[16];

	if (type < 5)
		printf("%s\n", table[type]);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
	printf("Processor Specific: (%4x)\n", type);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * entry - entry point address
 * @buf: string containing the entry point address
 * @mode: (32 or 64)
 * @end: endianness
 */
void entry(char *buf, int mode, int end)
{
	int size = mode / 8;

	printf("  %-35s0x", "Entry point address:");
	if (end)
	{
		while (size && !*(buf))
		{
			++buf;
			--size;
		}
		printf("%x", *buf & 0xff);

		while (--size > 0)
			printf("%02x", *(++buf) & 0xff);
	}
	else
	{
		buf += size;
		while (size && !*(--buf))
			--size;
		printf("%x", *buf & 0xff);
		while (--size > 0)
			printf("%02x", *(--buf) & 0xff);
	}
	printf("\n");
}
