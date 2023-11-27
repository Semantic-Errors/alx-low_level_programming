#include "dog.h"
#include <stdio.h>

#define NULLSTR "(nil)"

/**
 * print_dog - function that prints a struct dog
 *
 * @d - pointer to the dog struct
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? NULLSTR : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? NULLSTR : d->owner));
	}
}
