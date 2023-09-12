#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *                      0 otherwise
 */

int _isalpha(int c)
{
	int is_lower_char = ('a' <= c && c <= 'z');
	int is_upper_char = ('A' <= c && c <= 'Z');

	return (is_lower_char || is_upper_char);
}
