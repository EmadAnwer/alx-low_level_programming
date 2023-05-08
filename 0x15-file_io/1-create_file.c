/*
 * 0x15. C - File I/O
 * task 1
 */
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_TRUNC);
	if (file_descriptor == -1)
		file_descriptor = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
		if (write(file_descriptor, text_content, strlen(text_content)) == 0)
			return (-1);
	close(file_descriptor);

	return (1);
}
