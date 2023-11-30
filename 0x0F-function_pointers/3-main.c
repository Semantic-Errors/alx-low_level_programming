#include <stdio.h>
#include "3-calc.h"

#define ARGS_COUNT 4

/**
 * main - program that take 2 numbers and operator and calculate them
 *
 * @argc: argumnets count
 * @argv: arguments themselves
 *
 * Return: 0 on Success
 *		if the number of arguments is wrong exit with the status 98
 *		if the operator is none of targeted (+, -, *, /, %)  exit with 99 status
 *		if the user tries to divide (/ or %) by 0 exit with the status 100
 */

int main(int argc, char **argv)
{
	int number_one,  number_two;
	char *operation;

	if (argc != ARGS_COUNT)
	{
		printf("Error\n");
		exit(98);
	}

	number_one = atoi(argv[1]);
	number_two = atoi(argv[3]);
	operation = argv[2];

	calculate(number_one, operation, number_two);

	return (EXIT_SUCCESS);
}
