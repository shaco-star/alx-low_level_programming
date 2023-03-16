#include<stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: elements of array
 * @size: size of each byte
 *
 * Return: return pointer to new arr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len;
	char *arr;

	len = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(len);
	if (arr == NULL)
		return (NULL);

	return (arr);

}
