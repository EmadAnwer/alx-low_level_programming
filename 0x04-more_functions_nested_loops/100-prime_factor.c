#include <stdio.h>

/*
 * Task 10 in 0x01. C - Variables, if, else, while project
 * Purpose : prints all possible different combinations of two digits.
 * my sulotion: nested loops
 */

/**
 * main - function is the Entry Point for this program
 * prints prints all possible combinations of single-digit numbers.
 * 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15...etc
 * Return: value is (0)
 */

int main(void)
{
	int d2, d1;
	int i = 0;

	for (d1 = '0'; d1 != ('8' + 1); d1++)
	{
		for (d2 = '1' + i; d2 != ('9' + 1); d2++)
		{
		putchar(d1);
		putchar(d2);
		if (!((d1 == '8') && (d2 == '9')))
			{
			putchar(',');
			putchar(' ');
			}

		}
	i++;
	}
	putchar('\n');
	return (0);
}
