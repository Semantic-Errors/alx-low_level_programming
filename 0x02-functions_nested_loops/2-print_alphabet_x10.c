#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 *                          in lowercase, followed by a new line
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
    int times = 10;
    char character = 'a';

    while (times--)
    {
	    while (character <= 'z')
		    _putchar(character++);
	    _putchar('\n');
        
        character = 'a';
    }
}
