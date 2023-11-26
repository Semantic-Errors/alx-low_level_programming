#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *		The memory is set to zero
 *
 * @nmemb: number of elements
 * @size: number of bytes to allocate each element with
 *
 * Return: pointer to the allocated memory
 *		If nmemb or size is 0, then _calloc returns NULL
 *		If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *block;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	block = malloc(nmemb * size);

	if (block == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *) block + i) = 0x0;

	return (block);
}
