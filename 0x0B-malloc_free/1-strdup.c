#include "main.h"

/**
 * str_len - function that returns the size of a given string
 *
 * @str: the string to get its size
 *
 * Return: the size of the string or 0 if string is empty or NULL
 */

int str_len(char *str)
{
	unsigned int size = 0;

	if (str == NULL)
		return (-1);

	while (str[size] != '\0')
		size++;

	return (size);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *		memory which contains a copy of the string given as a parameter.
 *
 * @str: the original string to be copied in a newely string
 *
 * Return:	a pointer to the duplicated string
 *		or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i, size;
	char *new_str;

	size = str_len(str);

	if (size == -1)
		return (NULL);

	new_str = malloc((size + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		new_str[i] = str[i];

	return (new_str);
}
