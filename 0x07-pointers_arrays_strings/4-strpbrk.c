/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 4
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - returns the number of characters in the initial segment
 * @s: array refrance
 * @accept: array refrance
 * Return: array refrance
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, sp;

	sp = 2147483647;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i] && j < sp)
			{
				sp = j;
			}
		}
	}
	if (sp == 2147483647)
		return (NULL);

	return (s + sp);
}
