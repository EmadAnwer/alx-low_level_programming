#include "main.h"
/*
 * Task 4 in 0x02. C - Functions, nested loops
 * Purpose : checks for alphabetic character
 * Mission : Returns 1 if c is lowercase
 *           Returns 0 otherwise
 * my sulotion: return 1 if c bettwen 'a' to 'z' or 'A' to 'Z'
 */


/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 * Return: (1) if c is lowercase or uppercase
 *       : (0) if c is otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
