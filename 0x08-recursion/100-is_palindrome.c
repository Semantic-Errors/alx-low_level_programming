#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer to string to be printed
 *
 * Return: string size
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_str - helper function to find if string is palindrome
 *
 * @s: pointer to string to be checked
 * @begin: the index to be checked in string from begining
 * @end: the index to be checked in string from the end
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_str(char *s, int begin, int end)
{
	if (begin >= end)
		return (1);

	if (s[begin] != s[end])
		return (0);

	return (is_palindrome_str(s, begin + 1, end - 1));
}

/**
 * is_palindrome - function that checks if a string is a palindrome or not
 *
 * @s: pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (is_palindrome_str(s, 0, _strlen(s) - 1));
}
