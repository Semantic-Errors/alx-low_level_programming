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
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: string to be print its half
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int index = (sizeofstring(str) + 1) / 2;

	for (; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
