#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary search
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the number, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t half, i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array:");

	for (i = 0; i < size; i++)
		printf(" %d%s", array[i], (i == size - 1) ? "\n" : ",");
	half = (size - 1) / 2;
	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (binary_search(array, half, value));
	i = binary_search(array + half + 1, size - half - 1, value);

	return ((i == -1) ? -1 : ((int)half + i + 1));
}
