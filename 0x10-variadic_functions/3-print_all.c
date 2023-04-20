#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/*
 * 0x10. C - Variadic functions
 * task : 3
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
}


void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


void print_char(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}
/**
 * print_all -  prints anything.
 * @format: list of types of arguments passed to the function
 * @n: number of arguments
 */

void print_all(const char * const format, ...)
{
	int i, index;
	va_list args;
	c_t chars[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_str},
	};
	char s[] = "cifs";
	char *e;
	va_start(args, format);
	i = 0;
	
	while (format[i])
	{
		e = strchr(s, format[i]);
	
		while (e)
		{
			index = (int)(e - s);
			chars[index].f(args);
			if (format[i + 1] != '\0')
				printf(", ");
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
