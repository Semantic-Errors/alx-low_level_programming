#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: arguments counter
 * @argv: array of pointers to strings (arguments to the program)
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	exit(EXIT_SUCCESS);
}
