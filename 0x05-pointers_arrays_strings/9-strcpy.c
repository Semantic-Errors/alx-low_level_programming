#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *		including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @src: the source str
 * @dest: the buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; src++, i++)
		dest[i] = *src;
	dest[i] = '\0';

	return (dest);
}
