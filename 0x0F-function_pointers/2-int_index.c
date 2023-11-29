#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: target array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return:index of the first element for which the (cmp) does not return 0
 *		If no element matches, return -1
 *		If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL)
	{
		int i;

		if (cmp != NULL)
		{
			for (i = 0; i < size; i++)
				if (cmp(*(array + i)))
					return (i);
		}
	}

	return (-1);
}
