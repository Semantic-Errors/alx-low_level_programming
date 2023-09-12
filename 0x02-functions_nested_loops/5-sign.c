#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: number to be checked it's sign
 *
 * Return:	1 and prints + if n is greater than zero
 *			0 and prints 0 if n is zero
 *			-1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int sign_code = 0;

	if (n > 0)
		sign_code = 1;
	else if (n < 0)
		sign_code = -1;

	return (sign_code);
}
