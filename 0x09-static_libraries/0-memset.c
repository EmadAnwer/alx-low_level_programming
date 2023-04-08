/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 0
 */
#include "main.h"
#include "stdio.h"
/**
 * _memset -  fills memory buffer with a constant byte.
 * @s: array refrance
 * @b: constant byte
 * @n: buffer size
 * Return: s array refrance
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
