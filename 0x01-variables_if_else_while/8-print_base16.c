#include <stdio.h>

/**
 * main - Entry point
 * Description:prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';
	int A = 0;

	while (A <= 9)
        {
                putchar(A + '0');
                        A++;
        }
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
