#include"main.h"

/**
 * more_numbers - Print numbers from 0 to 14 10 times
 *
 * Return: 0 success
*/

void more_numbers(void)
{
	int i, k, num;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			num = k;
			if (k > 9)
			{
				_putchar(1 + '0');
				num = k % 10;
			}
			_putchar(num + '0');



		}
		_putchar('\n');
	}
}
