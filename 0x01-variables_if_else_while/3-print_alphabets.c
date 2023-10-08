#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase and then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char L = 'a', U = 'A';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
