/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 1
 */
#include "main.h"
#include "stdio.h"
/**
 * _memcpy - copies memory area.
 * @src: array refrance
 * @dest: array refrance
 * @n: buffer size
 * Return: s array refrance
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, destSize;

	destSize = sizeof(dest);
	for (i = 0; i < n && i < destSize; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
