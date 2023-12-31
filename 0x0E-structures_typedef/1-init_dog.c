#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the dog struct to be intialized
 * @name: the name of the dog to intialize dog with
 * @age: the age of the dog to intialize dog with
 * @owner: the dog owner to intialize dog woth
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
