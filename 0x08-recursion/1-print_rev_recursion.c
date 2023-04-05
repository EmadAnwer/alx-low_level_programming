/*
 * 0x08. C - Recursion
 * task 1
 */
#include "main.h"
/**
 * _print_rev_recursion - prints a  reverse string recursively
 * @s: array refrance "string"
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
