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
	int fp, word_len = 0;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (0);

	if (text_content)
	{
		while (text_content[word_len])
			word_len++;
		n_write = write(fp, text_content, word_len);
		if (n_write == -1)
		return (0);
	}
	close(fp);
	return (1);
}
