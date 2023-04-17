/*
 * 0x0E. C - Structures, typedef
 * task 1
 */
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct refrance
 * @name: name of the dog refrance
 * @age: age of the dog value
 * @owner: owner of the dog refrance
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (d == NULL)
		d = &my_dog;

	d->age = age;
	d->name = name;
	d->owner = owner;
}
