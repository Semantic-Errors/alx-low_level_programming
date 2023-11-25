#include "main.h"
#include <string.h>

/**
 * sizeof_args - gets the length of string args in argv
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: length of each arg
 */

int sizeof_args(char **av, int ac)
{
	int size = 0;

	while ((--ac) >= 0)
		size += strlen(av[ac]);

	return (size);
}

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int index = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc((sizeof_args(av, ac) + ac + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[index] = '\0';

	return (str);
}
