#include <stdio.h>
#include <stdlib.h>
/*
 * Task 3 in 0x0A. C - argc, argv
 * Purpose : multiplies two numbers "arguments"
 */

/**
 * main - multiplies two numbers "arguments"
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success or (1) faild
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
