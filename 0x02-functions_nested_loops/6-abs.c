#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @number: the number that return it's absolute value
 *
 * Return: absolute value of n
 */

int _abs(int number)
{
	unsigned int abs_number = (number < 0 ? -number : number);

	return (abs_number);
}
