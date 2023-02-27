#include"main.h"

/**
 * print_array - print array separated by comma
 *
 * @a: array
 * @n: length of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
			printf(", ");
	}
}
