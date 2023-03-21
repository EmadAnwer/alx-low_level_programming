#include "main.h"
/*
 * Task 1 in 0x02. C - Functions, nested loops
 * Purpose : including our own function in another file
 * Mission : the alphabet, in lowercase, followed by a new line.
 * my sulotion: using _putchar and while loops printing letters one by one
 */


/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * using _putchar function
 *
 * Return: (void)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
