#include <stdio.h>

/*
 * Task 6 in 0x01. C - Variables, if, else, while project
 */

/**
 * main - function is the Entry Point for this porgram
 * prints 0123456789 using putchar
 * Return: value is (0)
 */

int main(void)
{
	int number = '0';

	while (number != ':')
		putchar(number++);
	putchar('\n');
	return (0);
}
