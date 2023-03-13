#include"stdlib.h"

/**
 * create_array - create array with a specific char
 *
 * @size: size of the array
 * @c: char to initialize array with
 *
 * Return: address of char or NULL if fails or size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
