#include <stdio.h>

/*
 * Task 11 in  0x04. C - More functions, more nested loops
 * Purpose : prints the largest prime factor of the number
 *	     n = 612852475143
 */

/**
 * main - function is the Entry Point for this program
 * prints the largest prime factor 612852475143
 * Return: value is (0)
 */

int main(void)
{
	long n, p;

	n = 612852475143;
	p = 2;
	while (n >= p * p)
	{
		if (n % p == 0)
		{
			n = n / p;
		}
		p++;
	}
	printf("%lu\n", n);
	return (0);
}
