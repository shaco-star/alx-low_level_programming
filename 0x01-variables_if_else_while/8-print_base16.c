#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers with putchar
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int i, c = 'a';

	for (i = 0 ; i <= 15; i++)
	{
		if (i <= 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(c);
			++c;
		}

	}
	putchar('\n');

	return (0);
}
