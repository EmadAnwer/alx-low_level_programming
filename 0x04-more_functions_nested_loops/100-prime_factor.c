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
	long n,p;
	
	n = 612852475143;
	p = 2;
	while (n >= p * p)
	{
		if(n % p == 0)
		{
			n = n/p;
		}
		p++;
	}
	printf("%lu\n", n);
	return (0);
}
