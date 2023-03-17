#include <stdio.h>

/*
 * Task 3 in 0x01. C - Variables, if, else, while project
 * Purpose : prints the alphabet in lowercase, followed by a new line.
 * my sulotion: get letter using ascii
 *		lowercase start from 97 to 122 then from 65 to 90
 */

/**
 * main - function is the Entry Point for this porgram
 * prints lowercase letter then in uppercase followed by a new line using loops
 * Return: value is (0)
 */
int main(void)
{
	/*start from 97 means start from a becouse a = 97 in ascii */
	char letter = 97;
	/*letter != 123 "reapt untile letter == 122" in ascii 122 == 'z' */
	while (letter != 123)
		putchar(letter++);
	/*start from 65 means start from a becouse A = 65 in ascii */
	letter = 65;
	while (letter != 91)
		putchar(letter++);
	putchar('\n');
	return (0);
}
