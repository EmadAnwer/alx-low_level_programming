/*
 * 0x05. C - prints a string, in reverse
 * task 4
 * Purpose : returns the length of a string.
 */
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: char pointer
 * Return: the length *s
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
