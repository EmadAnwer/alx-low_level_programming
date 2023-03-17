#include <stdio.h>

/*
 * Task 9 in 0x01. C - Variables, if, else, while project
 * Purpose : prints all possible combinations of single-digit numbers.
 * my sulotion: start with char 0 to 9 brack in last round
 */

/**
 * main - function is the Entry Point for this program
 * prints prints all possible combinations of single-digit numbers.
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: value is (0)
 */

int main(void)
{
	int number = '0';

	while (number != ('9' + 1))
	{
	putchar(number);
	if (number != '9')
	{
		putchar(',');
		putchar(' ');
	}
	number++;
	}
	putchar('\n');
	return (0);
}
