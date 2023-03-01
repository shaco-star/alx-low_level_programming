#include"main.h"

/**
 * reverse_array - reverse array on integers
 *
 * @a: array
 * @n: length of the array
*/

void reverse_array(int *a, int n)
{
	int temp, i, e;


	for (i = 0, e = n - 1; i < e; i++, e--)
	{
		temp = a[i];
		a[i] = a[e];
		a[e] = temp;


	}


}
