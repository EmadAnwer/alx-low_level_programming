/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 3
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - returns the number of characters in the initial segment
 * @s: array refrance
 * @accept: array refrance
 * Return: spn
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int spn, i, j, f;

	spn = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				f = 1;
				break;
			}
		if (f == 0)
		{
			break;
		}
		else
			spn++;
	}
	return (spn);
}
