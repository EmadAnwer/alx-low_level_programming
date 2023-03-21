#include "main.h"
/*
 * Task 9 in 0x02. C - Functions, nested loops
 * Purpose : prints the 9 times table, starting with 0.
 */

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 *
 */

void times_table(void)
{
	char n1 = 0;
	char n2 = 0;
	char result = 0;

	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			result = n2 * n1;
			if (n2 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
			if (result > 9)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + result);
			}



			}
			if (n2 != 9)
				_putchar(',');

			n2++;
		}
		n1++;
		_putchar('\n');
	}
}
