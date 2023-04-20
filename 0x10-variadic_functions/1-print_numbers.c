#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*
 * 0x10. C - Variadic functions
 * task : 1
 */

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: result or 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i != (int)n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
