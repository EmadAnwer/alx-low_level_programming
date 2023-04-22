#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*
 * 0x10. C - Variadic functions
 * task : 2
 */

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(args, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if ((i != (int)n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
