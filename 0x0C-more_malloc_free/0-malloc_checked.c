#include<stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 *
 * @b: size of bytes
 *
 * Return: pointer to memory or 98 if fail
*/

void *malloc_checked(unsigned int b)
{
	void *arr;


	arr = malloc(b);
	if (arr == NULL)
		exit(98);

	return (arr);


}
