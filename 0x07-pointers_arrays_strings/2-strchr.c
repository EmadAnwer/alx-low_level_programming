/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 2
 */
#include "main.h"
#include <stdio.h>
/**
 * _strchr - copies memory area.
 * @s: array refrance
 * @c: char
 * Return: s array refrance or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
	}

	return (NULL);
}
