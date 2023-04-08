/*
 * 0x06. C - More pointers, arrays and strings
 * task 2
 */
#include "main.h"
/**
 * _strcmp - copies a string.
 * @s1: string refrance
 * @s2: string refrance
 * Return: 0 in equity
 * return int (the remainder of the subtraction)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ((s1[i] != '\0') || (s2[i] != '\0')); i++)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}
	return (0);

}
