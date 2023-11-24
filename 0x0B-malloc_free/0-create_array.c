#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *			and initializes it with a specific char
 *
 * @size: the size of memory to be allocated
 * @c: character to be intialized the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
