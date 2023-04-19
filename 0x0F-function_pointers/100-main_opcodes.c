#include <stdio.h>
#include <stdlib.h>
/*
 * 0x0F. C - Function pointers
 * task 4 adv
 */
/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success or (98, 99, 100) on field
 */

int main(int argc, char *argv[])
{
	int n1, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n1 = atoi(argv[1]);
	if (n1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n1; i++)
	{
		/* go next 1 byte == 1 char*/
		printf("%02hhx", *((char *) main + i));
		if (i + 1 != n1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
