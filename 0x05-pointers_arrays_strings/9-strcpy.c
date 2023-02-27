#include"main.py"

/**
 * _strcpy - copy string to another varibale
 *
 * @dest: points to location of string
 * @src: string
 *
 * Return: address
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
