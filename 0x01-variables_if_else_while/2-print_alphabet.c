#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
