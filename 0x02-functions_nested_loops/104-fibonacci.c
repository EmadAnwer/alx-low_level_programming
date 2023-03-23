#include <stdio.h>
/*
* Task 14 in 0x02. C - Functions, nested loops
* Purpose : print first 50 Fibonacci numbers
*/

/**
 * main - function is the Entry Point for this porgram
 * prints first 50 Fibonacci numbers
 * Return: value is (0)
 */

int main(void)
{
	unsigned long int current_fibonacci, previous_fibonacci, next_fibonacci;

	unsigned long int previous_fibonacci_1, previous_fibonacci_2

	unsigned long int next_fibonacci_1, next_fibonacci_2;

	previous_fibonacci = 1;
	next_fibonacci = 2;

	printf("%lu", previous_fibonacci);

	for (current_fibonacci = 1; current_fibonacci < 91; current_fibonacci++)
	{
		printf(", %lu", next_fibonacci);
		next_fibonacci = next_fibonacci + previous_fibonacci;
		previous_fibonacci = next_fibonacci - previous_fibonacci;
	}
	previous_fibonacci_1 = previous_fibonacci / 1000000000;
	previous_fibonacci_2 = previous_fibonacci % 1000000000;
	next_fibonacci_1 = next_fibonacci / 1000000000;
	next_fibonacci_2 = next_fibonacci % 1000000000;

	for (current_fibonacci = 92; current_fibonacci < 99; ++current_fibonacci)
	{
		printf(", %lu", next_fibonacci_1 + (next_fibonacci_2 / 1000000000));
		printf("%lu", next_fibonacci_2 % 1000000000);
		next_fibonacci_1 = next_fibonacci_1 + previous_fibonacci_1;
		previous_fibonacci_1 = next_fibonacci_1 - previous_fibonacci_1;
		next_fibonacci_2 = next_fibonacci_2 + previous_fibonacci_2;
		previous_fibonacci_2 = next_fibonacci_2 - previous_fibonacci_2;
	}

	printf("\n");

	return (0);
}

