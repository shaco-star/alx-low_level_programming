#include "search_algos.h"

/**
 * print_array - print array.
 *
 * @array: array that we will print
 * @start: start index of array
 * @end: end index of array
 *
 * Return: none
*/

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - search array using binary search algo
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value that we are searching for
 *
 * Return: return index of searched value, -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size;
	size_t mid;

	if (array == NULL)
		return  (-1);
	while (start < end)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid;
	}
	return (-1);
}
