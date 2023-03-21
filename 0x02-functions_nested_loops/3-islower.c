#include "main.h"
/*
 * Task 3 in 0x02. C - Functions, nested loops
 * Purpose : checks for lowercase character.
 * Mission : Returns 1 if c is lowercase
 *	     Returns 0 otherwise
 * my sulotion: check if is c bettwen 'a' to 'z'
 */


/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 * Return: (0) if c is lowercase
 *	 : (1) if c is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
