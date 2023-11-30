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
	int number_one,  number_two, res;
	char *operator;
	int (*op_fun)();

	if (argc != ARGS_COUNT)
	{
		printf("Error\n");
		exit(98);
	}

	number_one = atoi(argv[1]);
	number_two = atoi(argv[3]);
	operator = argv[2];

	op_fun = get_op_func(operator);

	if (op_fun == NULL)
	{
		puts("Error");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && !number_two)
	{
		puts("Error");
		exit(100);
	}

	res = op_fun(number_one, number_two);
	printf("%d\n", res);

	return (EXIT_SUCCESS);
}
