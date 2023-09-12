#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase,
 *                              followed by a new line
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
		_putchar(character++);
	_putchar('\n');
}
