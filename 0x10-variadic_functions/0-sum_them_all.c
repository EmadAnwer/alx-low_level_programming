#include "variadic_functions.h"
#include <stdarg.h>
/*
 * 0x10. C - Variadic functions
 * task : 0
 */

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: result or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, result;
	va_list args;

	if (n == 0)
		return (0);
	result = 0;
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
		result = result + va_arg(args, int);

	va_end(args);
	return (result);
}
