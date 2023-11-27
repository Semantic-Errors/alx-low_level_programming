#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Return: pointer to the new dog or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *d_name;
	char *d_owner;

	dog = malloc(sizeof(*dog));

	if (dog == NULL)
		return (NULL);

	d_name = malloc((strlen(name) + 1) * sizeof(*name));
	if (d_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	d_owner = malloc((strlen(owner) + 1) * sizeof(*owner));
	if (d_owner == NULL)
	{
		free(dog);
		free(d_name);
		return (NULL);
	}

	strcpy(d_name, name);
	strcpy(d_owner, owner);

	dog->name = d_name;
	dog->age = age;
	dog->owner = d_owner;

	return (dog);
}

