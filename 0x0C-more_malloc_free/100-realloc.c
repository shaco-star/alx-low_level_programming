#include<stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: old malloc
 * @old_size: old size of memory
 * @new_size: size of new memory allocated
 *
 * Return: pointer to newly created malloc
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *temp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}



	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	temp = ptr;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp[i];

	free(ptr);
	return (new_ptr);

}
