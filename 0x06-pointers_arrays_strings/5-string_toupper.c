#include"main.h"

/**
 * string_toupper - change lower case to uppercase
 *
 * @str: string that will be changed
 *
 * Return: char
*/

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		++str;
	}

	return (str);
}
