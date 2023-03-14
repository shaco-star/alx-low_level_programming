#include <stdlib.h>
int _strlen(char *s);

/**
 * argstostr - concatenates all arguments
 *
 * @ac: lenght of arguments
 * @av: array of arguments
 * Return: pointer
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;


	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			arr[k] = av[i][j];
		arr[k] = '\n';
		k++;
	}

	arr[k] = '\0';

	return (arr);

}

/**
 * _strlen - calculate lenght of a string
 *
 * @s: string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

