/*
 * 0x15. C - File I/O
 * task 2
 */
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
		if (write(file_descriptor, text_content, strlen(text_content)) == -1)
			return (-1);
	close(file_descriptor);

	return (1);
}
