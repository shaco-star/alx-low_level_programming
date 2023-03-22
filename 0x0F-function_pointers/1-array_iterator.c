#include "main.h"

/**
 * array_iterator - print a name
 *
 * @array: array that we will take action on it
 * @size: size of array
 * @action: pointer to fuction
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
