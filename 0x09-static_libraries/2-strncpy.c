/*
 * 0x06. C - More pointers, arrays and strings
 * task 2
 */
#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string.
 * @dest: char pointer left side
 * @src: char pointer right side
 * @n: number of characters to be copied from source.
 * Return: the length *s
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i < n; i++)
	{
		if (i < len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
