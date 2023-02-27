#include"main.h"

/**
 * rev_string - print the string in rev
 *
 * @s: string
*/

void rev_string(char *s)
{
	int len, index, temp;


	for (len = 0; s[len] != '\0'; len++)
		;

	for (index = 0; index < len / 2; index++)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;

	}
}
