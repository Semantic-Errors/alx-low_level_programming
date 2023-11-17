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
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
