#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * isnumber - function checks is the given string is number or not
 *		if it's number it will add it to sum
 *
 * @str: string to be checked if it's number or not
 * @sum: if str is a number it will be added to this var
 *
 * Return: 1 on success and 0 on faliure (any index of str is not a digit)
*/

int isnumber(char *str, int *sum)
{
	int digit, number = 0;

	for (digit = 0; str[digit] != '\0'; digit++)
		if (isdigit(str[digit]))
			number = 10 * number + (str[digit] - '0');
		else
			return (0);

	*sum += number;

	return (1);
}

/**
 * main - program that adds positive numbers
 *
 * @argc: arguments counter
 * @argv: array of pointers to strings (arguments to the program)
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int sum_of_args = 0;

	while (argc != 1)
	{
		if (!isnumber(argv[--argc], &sum_of_args))
		{
			puts("Error");
			exit(EXIT_FAILURE);
		}
	}

	printf("%d\n", sum_of_args);

	exit(EXIT_SUCCESS);
}
