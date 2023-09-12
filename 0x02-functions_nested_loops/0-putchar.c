#include <stdio.h>
#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	char *word = "_putchar";

	while (word[i] != '\0')
		_putchar(word[i++]);
	_putchar('\n');

	return (0);
}
