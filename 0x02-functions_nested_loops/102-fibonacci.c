#include <stdio.h>
/*
* Task 15 in 0x02. C - Functions, nested loops
* Purpose : print first 50 Fibonacci numbers
*/

/**
 * main - function is the Entry Point for this porgram
 * prints first 50 Fibonacci numbers
 * Return: value is (0)
 */

int main(void)
{
	double n1, n2, fib;

	char i, max;

	fib = 0;
	n1 = 0;
	n2 = 1;
	i = 2;
	max = 50;

	while (i <= max + 1)
	{
		fib = n2 + n1;
		n1 = n2;
		n2 = fib;
		printf("%.0f", fib);
		if (i != max + 1)
			printf(", ");
		else
			putchar('\n');

		i++;
	}

	return (0);

}

