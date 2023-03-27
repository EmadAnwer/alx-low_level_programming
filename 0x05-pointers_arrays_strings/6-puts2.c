/*
 * 0x05. C - Pointers, arrays and strings
 * task 6
 * Purpose :  prints every other character of a string
 */
#include "main.h"
#include <string.h>
/**
 * puts2 -  prints every other character of a string
 * @str: char pointer
 * Return: the length *s
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
