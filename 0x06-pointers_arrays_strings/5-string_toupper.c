/*
 * 0x06. C - More pointers, arrays and strings
 * task 5
 */
#include "main.h"
/**
 * string_toupper - copies a string.
 * @src: string refrance
 * Return: *src "string in uppercase."
 */
char *string_toupper(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 'a') && (src[i] <= 'z'))
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}
