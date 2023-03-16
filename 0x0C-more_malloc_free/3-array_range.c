#include<stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: starting number
 * @max: end number
 *
 * Return: pointer to newly created array
*/

void *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);

}
