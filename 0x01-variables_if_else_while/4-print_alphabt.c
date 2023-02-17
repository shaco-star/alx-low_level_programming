#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets except for q and e
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int c;

	for (c = 97 ; c <= 122; c++)
	{
		if (c == 'q' || c == 'e')
			++c;
		putchar(c);

	}
	putchar('\n');

	return (0);
}
