#include <stdio.h>

/*
 * Task 4 in 0x01. C - Variables, if, else, while project
 * Purpose : prints the alphabet in lowercase, followed by a new line.
 * my sulotion:
 *	get letter using ascii lowercase start from 97 to 122 and  ignore q-e
 */

/**
 * main - function is the Entry Point for this porgram
 * prints lowercase letter followed by a new line using loops
 * Return: value is (0)
 */

int main(void)
{
	/*start from 97 means start from a becouse a = 97 in ascii */
	char letter = 97;
	/*letter != 123 "reapt untile letter == 122"  ingore 'q'and 'e'*/
	while (letter != 123)
	{
		if ((letter != 'q') && (letter != 'e'))
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
