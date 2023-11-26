#include "main.h"

/**
 * array_range - function that creates an array of integers
 *			from min element to max element (range)
 *
 * @min: start of elements
 * @max: end of elements
 * 
 * Return: pointer to the newly created array
 *		If min > max, return NULL
 *		If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *numbers;

	if (min > max)
		return (NULL);

	numbers = malloc(sizeof(*numbers) * (max - min + 1));

	if (numbers == NULL)
		return (NULL);

	while (min <= max)
		numbers[i++] = min++;

	return (numbers);
}
