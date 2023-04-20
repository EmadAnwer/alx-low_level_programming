#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct cformat - Struct cformat
 *
 * @c: The operator
 * @f: The function associated
 */
typedef struct cformat
{
	char c;
	void (*f)(va_list args);
} c_t;
#endif /* VARIADIC_FUNCTIONS_H */
