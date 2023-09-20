#include "main.h"

/**
 * _strncat - function that concatenates two strings, use at most n bytes from src
 *
 * @src: string to be added at the end of destination string
 * @dest: destination string (full string after concatination)
 * @n: number of bytes to be concatinated
 *
 * Return: Pointer that points to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	while (n-- && *src != '\0')
		*(dest + i++) = *(src++);
	*(dest + i) = '\0';

	return (dest);
}
