#include"main.h"

/**
 * print_alphabet_x10 - Function return alphabet char 10 times
 *
 * Description: print alphabet from a to z in lowercase
 * 10 times
*/





void print_alphabet_x10(void)
{
	int line, i;

	for (line = 0; line < 10; line++)
	{
		for (i = 97; i <= 122 ; i++)
			_putchar(i);

		_putchar('\n');
	}
}
