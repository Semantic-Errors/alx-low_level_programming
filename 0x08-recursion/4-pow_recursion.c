#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 *						x raised to the power of y
 *
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power of y
 *		If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	result = _pow_recursion(x, y >> 1);

	return ((y & 1) ? result * result * x :
					result * result);
}
