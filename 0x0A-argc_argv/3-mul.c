#include <stdio.h>
#include <stdlib.h>

/* ARGSCOUNT - the args needed to the program (only 2 args) */
#define ARGSCOUNT 3

/**
 * main - program that multiplies two numbers
 *
 * @argc: arguments counter
 * @argv: array of pointers to strings (arguments to the program)
 *
 * Return: 0 in sucess
 *		1 if the program does not receive two arguments
 */

int main(int argc, char **argv)
{
	int multiplication_of_args = 1;

	if (argc != ARGSCOUNT)
	{
		puts("Error");
		exit(EXIT_FAILURE);
	}

	while (argc != 1)
		multiplication_of_args *= atoi(argv[--argc]);

	printf("%d\n", multiplication_of_args);

	exit(EXIT_SUCCESS);
}
