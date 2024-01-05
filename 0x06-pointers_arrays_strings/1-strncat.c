#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * strlen - returns the length of a string
 * @dest: pointer to destination input
 * @src: pointer to a source input
 * @n: most number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
