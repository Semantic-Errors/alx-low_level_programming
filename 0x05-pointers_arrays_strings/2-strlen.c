#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer to string to get it's length
 *
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
