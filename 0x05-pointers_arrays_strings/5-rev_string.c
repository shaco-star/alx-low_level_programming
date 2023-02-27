#include"main.h"

/**
 * rev_string - print the string in rev
 *
 * @s: string
*/

void rev_string(char *s)
{
	int len, index;
	char *start, *end, temp;

	start = s;
	end = s;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (index = 0; index < len - 1; index++)
		end++;
	for (index = 0; index < len / 2; index++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
