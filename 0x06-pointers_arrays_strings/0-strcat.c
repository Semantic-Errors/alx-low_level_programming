#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @src: string to be added at the end of destination string
 * @dest: destination string (full string after concatination)
 *
 * Return: Pointer that points to the new string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
		i++;

	for (; *src != '\0'; src++)
		*(dest + i++) = *src;
	*(dest + i) = '\0';

	return (dest);
}
