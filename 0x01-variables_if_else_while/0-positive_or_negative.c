#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Task 0 in 0x01. C - Variables, if, else, while project
 * Purpose : practice if and else if
 * Mission : checking if 'n' is positive or nigative or 0
 * my sulotion: using Relational Operators  '< > ==' to check
 */

/**
 * main - function is the Entry Point for this porgram
 * checking if 'n' is positive or nigative or 0
 * Return: value is (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
