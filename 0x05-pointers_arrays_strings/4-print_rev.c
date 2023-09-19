#include "main.h"

/**
 * sizeofstring - function that returns the size of string
 *
 * @s: pointer to a string that want to return its size
 *
 * Return: the length of the string
*/

int sizeofstring(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++, lenght++)
		;

	return (lenght);
}

/**
 * print_rev - function that prints a string, in reverse, followed by new line
 *
 * @s: pointer to string to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = sizeofstring(s);

	while (length >= 0)
		_putchar(s[--length]);
	_putchar('\n');
}
