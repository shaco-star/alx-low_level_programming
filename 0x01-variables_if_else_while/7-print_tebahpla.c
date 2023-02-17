#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in reverse
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int c;

	for (c = 122 ; c >= 97; c--)
	{

		putchar(c);

	}
	putchar('\n');

	return (0);
}
