#include "main.h"
/*
 * Task 0 in 0x04. C - More functions, more nested loops
 * Purpose : checks for uppercase character.
 */


/**
 * _isupper - checks for uppercase character.
 * @c: int number
 * Return: (c) 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
