/*
 * 0x0E. C - Structures, typedef
 * task 2
 */
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct refrance
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/*print dog name*/
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		/*print age*/
		if (d->age != 0)
			printf("Age: %6f\n", d->age);
		else
			printf("Age: (nil)\n");
		/*print owner name*/
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
