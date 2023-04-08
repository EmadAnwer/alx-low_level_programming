#include <stdio.h>
/*
 * Task 2 in 0x0A. C - argc, argv
 * Purpose : Write a program that prints all arguments it receives.
 */

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
