#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @number: the number to prints it's last digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}
