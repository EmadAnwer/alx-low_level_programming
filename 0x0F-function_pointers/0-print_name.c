/*
 * 0x0F. C - Function pointers
 * task 0
 */
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: char pointer to name
 * @f: funtcion pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
