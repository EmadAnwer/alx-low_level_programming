/*
 * 0x08. C - Recursion
 * task 1
 */
#include "main.h"
/**
 * _strlen_recursion - string len
 * @s: array refrance "string"
 * Return: string len (int)
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
