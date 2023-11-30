#include "3-calc.h"

/**
 * get_op_func - function that return function pointer to the target operator
 *
 * @s: the operator to get it's function
 *
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
		if (*ops[i++].op == *s)
			return (ops[--i].f);

	return (NULL);
}
