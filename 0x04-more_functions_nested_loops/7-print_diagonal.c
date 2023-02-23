#include"main.h"

/**
 * print_diagonal - Print diagonals in terminal
 *
 * @n: length of the line
 *
 * Return: 0 success
*/

void print_diagonal(int n)
{
	int i, space;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = 1; space <= i; space++)
				_putchar(' ');


			_putchar('\\');
			_putchar('\n');
		}

	} else
		_putchar('\n');
}
