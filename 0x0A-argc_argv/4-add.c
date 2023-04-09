#include <stdio.h>
#include <stdlib.h>
/*
 * Task 4 in 0x0A. C - argc, argv
 * Purpose : adds positive numbers.
 */

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success or (1) faild
 */

int main(int argc, char *argv[])
{
	int a, temp;
	char *c;

	a = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (--argc)
	{
		temp = -1;
		argv++;
		c = *argv;
		while ((*c) != '\0')
		{
			if (temp == -1)
			{
				temp = 0;
			}
			if ((*c >= '0') && (*c <= '9'))
			{
				temp = temp + (*c - '0');
				if ((*(c + 1) != '\0'))
				{
					temp = temp * 10;
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		a = a + temp;
	}
	printf("%d\n", a);
	return (0);
}
