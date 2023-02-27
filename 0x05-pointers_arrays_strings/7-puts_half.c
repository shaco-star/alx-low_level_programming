#include"main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string
*/

void puts_half(char *str)
{
	int len, i;


	for (len = 1; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for  (i = ((len - 1) / 2) + 1; str[i] != '\0'; i++)
			_putchar(str[i]);

	}

	_putchar('\n');
}
