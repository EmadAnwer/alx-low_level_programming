#include "main.h"
#include <stdio.h>
/*
 * Task 10 in 0x02. C - Functions, nested loops
 * Purpose : prints all natural numbers from n to 98, followed by a new line.
 */

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int number
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
	if (n > 98)
		printf("%d, ", n--);
	else
		printf("%d, ", n++);
	}
	printf("%d\n", 98);

}
