/*
 * 0x15. C - File I/O
 * task 3
 */
#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int fd_from, fd_to;
	char buf[1024];
    if (ac != 3)
    {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    
    fd_to = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_to == -1)
		fd_to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if(fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd_from = open(av[1], O_RDONLY);
	if(read(fd_from, buf, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (write(fd_to, buf, strlen(buf)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}	
	if(close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if(close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
    return (0);
}
