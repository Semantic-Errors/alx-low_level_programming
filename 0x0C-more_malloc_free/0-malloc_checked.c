#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 *		if malloc fails, should cause process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *block = malloc(b);

	if (block == NULL)
		exit(98);

	return (block);
}
