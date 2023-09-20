#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 *						followed by a new line
 *
 * @a: array to be print its elements
 * @n: number of elements to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
