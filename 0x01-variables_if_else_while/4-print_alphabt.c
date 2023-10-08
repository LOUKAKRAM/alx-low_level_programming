#include <stdio.h>

/**
 * main - Entery point
 * Description: prints the alphabet in lowercase except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);
}
