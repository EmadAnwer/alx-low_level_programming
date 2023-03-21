#include "main.h"
/*
 * Task 2 in 0x02. C - Functions, nested loops
 * Purpose : including our own function in another file
 * Mission : print the alphabet, in lowercase, followed by a new line 10 times
 * my sulotion: using _putchar to print to print each char
 *              while loop printing letters one by one in the same line
 *		for loop repets the while loop code 10 times
 *
 */


/**
 * print_alphabet_x10 - prints alphabet followed by a new line.10x
 * using _putchar function again
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	char i, letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter++);
		}
		_putchar('\n');
	}
}
