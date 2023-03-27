/*
 * 0x05. C - Pointers, arrays and strings
 * task 7
 * Purpose :  prints half of a string, followed by a new line.
 */
#include "main.h"
#include <string.h>
/**
 * puts_half -   prints half of a string, followed by a new line.
 * @str: char pointer
 * Return: the length *s
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
