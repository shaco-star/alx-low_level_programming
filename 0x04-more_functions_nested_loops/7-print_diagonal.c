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
		for (space = 0; space <= i; space++)
			_putchar(' ');

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}

	}
	_putchar('\n');
}
