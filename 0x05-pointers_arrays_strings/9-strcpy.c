#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - prints half of a string, followed by a new line.
 * @dest: buffer pointed to
 * @src: the string pointed to
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
