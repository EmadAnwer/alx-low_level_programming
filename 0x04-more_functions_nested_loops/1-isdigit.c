#include "main.h"
/*
 * Task 1 in 0x04. C - More functions, more nested loops
 * Purpose : checks for a digit (0 through 9).
 */


/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: int number
 * Return: (c) 1 if c is a digit (0 through 9) otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
