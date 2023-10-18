#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse using putchar
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
