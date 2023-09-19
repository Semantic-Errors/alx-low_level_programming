#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: a pointer to a string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	char *reversed_index_of_s = s;

	while (*reversed_index_of_s != '\0')
		reversed_index_of_s++;

	while (s <= (--reversed_index_of_s))
	{
		char temp = *reversed_index_of_s;

		*reversed_index_of_s = *s;
		*s = temp;
		s++;
	}
}
