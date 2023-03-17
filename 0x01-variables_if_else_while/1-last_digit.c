#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Task 1 in 0x01. C - Variables, if, else, while project
 * Purpose : practice if and else if and how get last digit of the number
 * Mission : checking if 'n' is positive or nigative or 0
 *           get last digit of the number
 * my sulotion: using Relational Operators  '< > ==' to check
 *              get last digit of the number using %10
 */

/**
 * main - function is the Entry Point for this porgram
 * prints->
 *	-Last digit of n is n%10 is  greater than 5
 *	-Last digit of n is n%10 and is 0
 *	-Last digit of n is n%10  and is less than 6 and not 0
 * Return: value is (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
