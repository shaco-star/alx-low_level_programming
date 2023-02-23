#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: number of triangle
 *
 * Return: 0 success
*/

void print_triangle(int size)
{

	int row, space, i = size, hash, k;


	if (size == 0 || size < 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		--i;
		hash = size - i;

		for (space = 0; space < i; space++)
			_putchar(' ');

		for (k = 0; k < hash; k++)
			_putchar('#');

		_putchar('\n');

	}
}
