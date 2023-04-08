#include <stdio.h>
/*
 * Task 0 in 0x0A. C - argc, argv
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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
