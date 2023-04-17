/*
 * 0x06. C - More pointers, arrays and strings
 * task 6
 */
#include "dog.h"
/**
 * init_dog - capitalizes all words of a string
 * @d: struct refrance
 * @name: name of the dog refrance
 * @age: age of the dog value
 * @owner: owner of the dog refrance
 * Return: *src "all words of a string capital"
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
