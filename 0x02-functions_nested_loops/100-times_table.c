#include "main.h"

/*
* Task 10 in 0x02. C - Functions, nested loops
* Purpose : prints prints the n times table, starting with 0.
*/

/**
* print_times_table - prints the n times table, starting with 0.
* @n: int number
* Return: void
*
*/

void print_times_table(int n)
{
	char n1 = 0, n2 = 0;

	if (n > 15 || n < 0)
		return;
	while (n1 <= n)
	{
		n2 = 0;
		while (n2 <= n)
	{
			if (n2 == 0)
				_putchar('0');
			else
			{
				_putchar(' ');
				if ((n2 * n1) > 99)
				{
				_putchar('0' + ((n2 * n1) / 100));
				_putchar('0' + ((n2 * n1) % 100) / 10);
				_putchar('0' + (n2 * n1) % 10);
				}
				else if ((n2 * n1) > 9)
				{
				_putchar(' ');
				_putchar('0' + (n2 * n1) / 10);
				_putchar('0' + (n2 * n1) % 10);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (n2 * n1));
				}
			}
			if (n2 != n)
				_putchar(',');
			n2++;
	}
	n1++;
	_putchar('\n');
	}
}
