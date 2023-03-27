/*
 * 0x05. C - Pointers, arrays and strings
 * task 2
 * Purpose : returns the length of a string.
 */
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char pointer
 * Return: the length *s
 */
int _strlen(char *s)
{
	int len = 1;

	while (s[len] != '\0')
		len++;
	return (len);
}
