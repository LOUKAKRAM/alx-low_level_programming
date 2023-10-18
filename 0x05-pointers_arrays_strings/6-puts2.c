#include "main.h"
#include <string.h>

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i, m, l = strlen(str);

	for (i = 0; i < l - 1; i += 2)
	{
		m = str[i];
		_putchar(m);
	}
	_putchar('\n');
}
