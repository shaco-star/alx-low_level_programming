#include"main.h"

/**
 * print_diagsums - prints sum of two diagonals of square matrix
 *
 * @a: array
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, d1, d2, size_all;

	size_all = size * size;
	d1 = 0;
	d2 = 0;
	for (i = 0; i < size_all; i++)
	{

		if (i % (size + 1) == 0)
			d1 += a[i];

		if (i % (size - 1) == 0 && i != 0 && i < (size_all - 1))
			d2 += a[i];
	}

	printf("%d, %d\n", d1, d2);
}

