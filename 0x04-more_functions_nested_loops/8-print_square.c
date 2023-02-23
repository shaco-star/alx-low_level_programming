#include"main.h"

/**
 * print_square - Print a Square
 *
 * @n: dimentions of the square
 *
 * Return: 0 success
*/

void print_square(int n)
{
	int row, col;

	if (n != 0 && n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
				_putchar('#');
			_putchar('\n');
		}

	} else
		_putchar('\n');
}
