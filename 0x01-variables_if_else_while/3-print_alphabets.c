#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int n, ch = 97;

	for (n = 0 ; n <= 51; n++)
	{

		putchar(ch);
		++ch;
		if (ch == 123)
			ch = 65;

	}
	putchar('\n');

	return (0);
}
