/*
 * 0x06. C - More pointers, arrays and strings
 * task 1
 */
#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings not more than n
 * @dest: char pointer left side
 * @src: char pointer right side
 * @n: int variable
 * Return: the length *s
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = strlen(dest);
	for (i = 0; (src[i] != '\0') && (i < n); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
