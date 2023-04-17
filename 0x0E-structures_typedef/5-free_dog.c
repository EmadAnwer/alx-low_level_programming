/*
 * 0x0E. C - Structures, typedef
 * task 5
 */
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  free dog from the memory
 * @d: dog refrance
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->name != NULL)
			free(d->owner);
		free(d);
	}
}
