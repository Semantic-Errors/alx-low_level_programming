#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arguments counter
 * @argv: array of pointers to strings (arguments to the program)
 *
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
