#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: string of file name
 * @text_content: string to write to file
 *
 * Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n_write;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR, 0600);
	if (fp == -1)
		return (0);

	if (text_content != NULL)
	{
		buffer = malloc(sizeof(char) * text_content);
		if (buffer == NULL)
			return (0);
		n_write = write(fp, buffer, text_content);
		if (n_write == -1)
		return (0);
	}
	free(buffer);
	close(fp);
	return (1);
}
