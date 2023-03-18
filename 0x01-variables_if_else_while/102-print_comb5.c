#include <stdio.h>

/*
 * Task 12 in 0x01. C - Variables, if, else, while project
 * Purpose : prints all possible different combinations of 4 digits
 * my sulotion: nested loops
 */

/**
 * main - function is the Entry Point for this program
 * prints all possible different combinations of three digits
 * 00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07,..etc
 * Return: value is (0)
 */

#include <stdio.h>

int main(void)
{
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (i = j + 1; i <= 99; i++)
		{

			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (j * 100 + i != 9899)
			{
				putchar(',');
				putchar(' ');

			}





		}

	}
putchar('\n');
return (0);
}

