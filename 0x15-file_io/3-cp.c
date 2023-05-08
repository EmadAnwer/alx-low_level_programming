/*
 * 0x15. C - File I/O
 * task 3
 */
#include "main.h"
/*prototypes*/
void check_args(int ac);
void close_fd(int fd);
/**
 * main - check the code
 * @ac: arguments count
 * @av: arguments vactor
 * Return: 0 success Otherwise failed
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, nr;
	char buf[1024];

	check_args(ac);
	fd_to = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_to == -1)
		fd_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while ((nr = read(fd_from, buf, 1024)))
	{
		if (nr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(98);
		}
		if (nr != write(fd_to, buf, nr))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}

	}
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
/**
 * check_args - check agrs count
 * @ac: arguments count
 * If the number is not 3 exit: 97
 */
void check_args(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * close_fd - check agrs count
 * @fd: file descriptor
 * If close failed exit(100)
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
