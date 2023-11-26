#include "main.h"
#include <string.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated to s1
 *
 * Return: pointer points to a newly allocated space in memory
 *		which contains s1, followed by the first n bytes of s2, and null terminated
 *		If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, index = 0;
	unsigned int s1_size, s2_size;

	s1 = (s1 == NULL ? "" : s1);
	s1_size = strlen(s1);

	s2 = (s2 == NULL ? "" : s2);
	s2_size = strlen(s2);

	str = calloc(s1_size + MIN(s2_size, n) + 1, sizeof(*str));

	if (str == NULL)
		return (str);

	for (i = 0; s1[i] != '\0'; i++, index++)
		str[index] = s1[i];

	for (i = 0; i < MIN(s2_size, n); i++, index++)
		str[index] = s2[i];

	return (str);
}
