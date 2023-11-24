#include "main.h"

/**
 * str_len - function that gets the length of string
 *
 * @str: string input
 *
 * Return: length
 */

int str_len(char *str)
{
	int size = 0;

	while (str[size] != '\0')
		size++;

	return (size);
}

/**
 * str_copy - function that copy content of second string to specific index
 *		in first string (string one should have enough space)
 *
 * @s1: first string
 * @start: start index to paste into
 * @s2: second string
 *
 * Return: Nothing
 */

void str_copy(char *s1, int start, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0'; i++)
		s1[start + i] = s2[i];
}

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory
 *		NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int s1_size, s2_size;

	s1 = (s1 == NULL ? "" : s1);
	s2 = (s2 == NULL ? "" : s2);

	s1_size = str_len(s1);
	s2_size = str_len(s2);

	new_str = malloc((s1_size + s2_size + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	str_copy(new_str, 0, s1);
	str_copy(new_str, s1_size, s2);

	return (new_str);
}
