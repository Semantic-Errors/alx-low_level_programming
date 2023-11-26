#include "main.h"

#define MIN(a,b) ((a) < (b) ? (a) : (b))

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: the new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr = NULL;

	if (old_size == new_size)
		return (ptr);

	if (!new_size)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		old_size = 0;

	new_ptr = malloc(old_size + new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < MIN(old_size, new_size); i++)
		*((char *) new_ptr + i) = *((char *) ptr + i);

	free(ptr);

	return (new_ptr);
}

