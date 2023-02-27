#include"main.h"

/**
 * swap_int - swap value of 2 numbers
 *
 * @a: pointer input
 * @b: pointer input
 *
 * Return: 0 success
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
