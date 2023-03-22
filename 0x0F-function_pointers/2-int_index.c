#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - compare integer
 *
 * @array: array that we will take action on it
 * @size: size of array
 * @cmp: compare
 *
 * Return: index of matched or -1 when failed
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
