/*
 * 0x15. C - File I/O
 * task 0
 */
#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buf;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	letters = read(file_descriptor, buf, letters);
	if ((size_t) write(STDOUT_FILENO, buf, letters) != letters)
		return (0);
	close(file_descriptor);
	free(buf);
	return (letters);
}
