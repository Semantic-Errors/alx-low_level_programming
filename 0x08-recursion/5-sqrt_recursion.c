#include "main.h"

/**
 * search_for_sqrt - linear searching for square root of n recursively
 *
 * @n: number to get it's square root
 * @i: iterator
 *
 * Return: natural Square of n
 *	n does not have a natural square root, the function should return -1
 */

int search_for_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (search_for_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number to get it's square root
 *
 * Return: natural Square of n
 *	n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (search_for_sqrt(n, 1));
}
