#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: the name to be printed
 * @f: function pointer to be print the name with (special printing)
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	name = (name == NULL ? "" : name);

	if (f != NULL)
		f(name);
}
