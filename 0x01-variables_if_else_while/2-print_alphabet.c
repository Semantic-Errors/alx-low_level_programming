#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char character = 'a';

	while (character <= 'z')
		putchar(character++);
	putchar('\n');

	return (0);
}
