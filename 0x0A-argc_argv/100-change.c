#include <stdio.h>
#include <stdlib.h>
/*
 * Task 5 in 0x0A. C - argc, argv
 * Purpose : minimum number of coins to make change for an amount of money.
 */

/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success or (1) faild
 */

int main(int argc, char *argv[])
{
	int a, total, i;
	int changes[4] = {25, 10, 2, 1};

	a = 0;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 4; i++)
	{
		a = a + (total / changes[i]);
		total = total % changes[i];
		if (total == 0)
			break;
	}
	printf("%d\n", a);
	return (0);
}
