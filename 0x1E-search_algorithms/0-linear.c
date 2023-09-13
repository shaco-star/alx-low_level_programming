#include "search_algos.h"

/**
 * linear_search - search for value in array using linear search
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value that we are searching for
 *
 * Return: index of value if found, -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);

}
