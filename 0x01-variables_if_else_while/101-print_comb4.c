#include <stdio.h>

/*
 * Task 11 in 0x01. C - Variables, if, else, while project
 * Purpose : prints all possible different combinations of three digits
 * my sulotion: nested loops
 */

/**
 * main - function is the Entry Point for this program
 * prints all possible different combinations of three digits
 * 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026..etc
 * Return: value is (0)
 */


int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = '0'; digit1 != ('7' + 1); digit1++)
	{
		for (digit2 = digit1 + 1; digit2 != ('8' + 1); digit2++)
		{
			for (digit3 = digit2 + 1; digit3 != ('9' + 1); digit3++)
			{

			putchar(digit1);
			putchar(digit2);
			putchar(digit3);

				if ((!((digit1 == '7') && (digit2 == '8') && (digit3 == '9'))))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}

	}
	putchar('\n');
	return (0);
}
