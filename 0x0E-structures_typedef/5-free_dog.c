#include "main.h"

/**
 * free_dog - function that frees dogs
 *
 * @d: pointer to dog struct to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (dog != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
