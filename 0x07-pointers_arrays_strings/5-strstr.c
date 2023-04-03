/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 5
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - returns the number of characters in the initial segment
 * @haystack: array refrance
 * @needle: array refrance
 * Return: array refrance
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0' && needle[0] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				return (haystack + j);
		}
	}

	return (NULL);

}
