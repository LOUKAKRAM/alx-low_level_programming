#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i, length = strlen(s), store;

	for (i = 0; i < (length/2); i++)
	{
		store = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = store;
	}
}
