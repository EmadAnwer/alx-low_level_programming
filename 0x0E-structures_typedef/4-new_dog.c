/*
 * 0x0E. C - Structures, typedef
 * task 4
 */
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog refrance
 * @age: age of the dog value
 * @owner: owner of the dog refrance
 * Return: new dog refrance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->age = age;

	if (name != NULL)
	{
		my_dog->name = malloc(strlen(name) + 1);
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		else
		{
			strcpy(my_dog->name, name);
		}
	}

	if (owner != NULL)
	{
		my_dog->owner = malloc(strlen(owner) + 1);
		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}
		else
		{
			strcpy(my_dog->owner, owner);
		}
	}
	return (my_dog);
}
