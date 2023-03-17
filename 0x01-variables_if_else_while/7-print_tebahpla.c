#include <stdio.h>

/*
 * Task 7 in 0x01. C - Variables, if, else, while project
 * Purpose : prints alphabet in lowercase in reverse,followed by a new line.
 * my sulotion: get letter using ascii lowercase start from 'z' to 'a'
 */

/**
 * main - function is the Entry Point for this porgram
 * prints lowercase letter in reverse followed by a new line using loops
 * Return: value is (0)
 */

int main(void)
{
	/*start from 'z' */
	char letter = 'z';
	/*reapt untile 'a' */
	while (letter != ('a' - 1))
		putchar(letter--);

	putchar('\n');

	return (0);
}
