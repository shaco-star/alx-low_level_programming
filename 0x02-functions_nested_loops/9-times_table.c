#include"main.h"

/**
 * times_table - prints multiplication table of 9
 *
*/

void times_table(void)
{
	int i, k, multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (k = 1; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');
			multi = i * k;
			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}

}
