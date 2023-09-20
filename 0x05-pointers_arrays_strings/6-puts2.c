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
 * puts2 - function that prints every other character of a string,
 *				starting with the first character, followed by a new line.
 *
 * @str: string to be print its characters
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, length;

	length = sizeofstring(str);

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
