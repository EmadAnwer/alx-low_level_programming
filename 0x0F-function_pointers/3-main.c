#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/*
 * Task 1 in 0x0A. C - argc, argv
 * Purpose : Write a program that prints its name, followed by a new line.
 */
/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int (*pf)(int, int), n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	pf = get_op_func(argv[2]);
	if (pf == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (((argv[2][0] == '/') || (argv[2][0] == '/')) && (n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", pf(n1, n2));
	return (0);
}
