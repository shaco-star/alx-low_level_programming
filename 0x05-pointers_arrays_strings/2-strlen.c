#include"main.h"

/**
 * _strlen - length of string
 *
 * @s: pointer input
 *
 * Return: length
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);

i

}
