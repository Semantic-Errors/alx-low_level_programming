#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_all_star - function that checks from index [1] to the [size] index
 *				contains '*' only ot nor
 *
 * @str: pointer to the string
 * @size: the range to be checked
 *
 * Return: 1 if it consists only from * and 0 otherwise
 */

int is_all_star(char *str, int size)
{
	int i;

	for (i = 1; i <= size; i++)
		if (str[i - 1] != '*')
			return (0);

	return (1);
}

/**
 * wildcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: seccond string
 *
 * Return: returns 1 if the strings can be considered identical
 *			otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int i, j;
	int result;
	int m = strlen(s1);
	int n = strlen(s2);

	int *prev = (int *) calloc(m + 1, sizeof(int));
	int *curr = (int *) calloc(m + 1, sizeof(int));

	prev[0] = 1;

	for (i = 1; i <= n; i++)
	{
		curr[0] = is_all_star(s2, i);

		for (j = 1; j <= m; j++)
		{
			if (s2[i - 1] == s1[j - 1])
				curr[j] = prev[j - 1];
			else
			{
				if (s2[i - 1] == '*')
					curr[j] = prev[j] || curr[j - 1];
				else
					curr[j] = 0;
			}
		}
		memcpy(prev, curr, (m + 1) * sizeof(int));
	}

	result = prev[m];

	free(prev);
	free(curr);

	return (result);
}
