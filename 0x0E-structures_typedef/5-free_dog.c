#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - this function frees dogs
 * @d: dog name 
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}