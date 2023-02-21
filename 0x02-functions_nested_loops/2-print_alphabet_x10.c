#include"main.h"

/**
 * print_alphabet - Function return alphabet char
 *
 * Description: print alphabet from a to z in lowercase
 * 10 times
*/





void print_alphabet(void)
{
	int line, i;

	for (line = 0; line < 10; line++)
	{
		for (i = 97; i <= 122 ; i++)
			_putchar(i);

		_putchar('\n');
	}
}
