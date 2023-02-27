#include"main.h"

/**
 * print_rev - print the string in rev
 *
 * @s: string
*/

void print_rev(char *s)
{
	int len;

	for (len = 0; *s[len] != '\0'; len++)
		;
	for (len -= 1; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
