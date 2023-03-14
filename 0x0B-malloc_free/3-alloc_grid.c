#include"stdlib.h"

/**
 * alloc_grid - make 2 dimensional array of integer
 *
 * @width: width of array columns
 * @height: number of rows
 *
 * Return: pointer to 2D array
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

	}
	return (arr);
}

