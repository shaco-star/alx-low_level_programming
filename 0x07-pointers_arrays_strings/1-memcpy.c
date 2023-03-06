#include"main.h"

/**
 * _memcpy - fils memory with constant byte
 *
 * @src: points to memory area that we will copy
 * @dest: memory that will be copied to
 * @n: number of byte to be copied
 *
 * Return: pointer to copied memory @dest
*/

char *_memcpy(char *dest, char src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
