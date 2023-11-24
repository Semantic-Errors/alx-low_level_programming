#include "main.h"
#include <string.h>

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
	char *new_str;
	unsigned int i, size;

	size = strlen(str);

	if (size == 0)
		return (NULL);

	new_str = malloc((size + 1) * sizeof(char));

	for (i = 0; i <= size; i++)
		new_str[i] = str[i];

	return (new_str);
}
