#include <stdio.h>

/*
 * Task 8 in 0x01. C - Variables, if, else, while project
 * Purpose : prints prints all the numbers of base 16 in lowercase
 */

/**
 * main - function is the Entry Point for this porgram
 * prints 0123456789abcdef
 * Return: value is (0)
 */

int main(void)
{
	/*start from 'z' */
	int letter = '0';
	/*reapt untile 'f' */
	while (letter != ('f' + 1))
	{
		putchar(letter++);
		if (letter == ('9' + 1))
			letter = 'a';
	}
	putchar('\n');

	return (0);
}
