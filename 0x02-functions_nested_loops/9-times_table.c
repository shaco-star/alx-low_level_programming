#include"main.h"

/**
 * times_table - print the 9 times table
 *
*/

void times_table(void)
{
	int i, k, multi = 0;

	for (i = 0; i <= 9; i++)
	{

		for (k = 0; k <= 9; k++)
		{
			multi = i * k;
			if ((multi / 10))
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (!(multi / 10))
				{
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
