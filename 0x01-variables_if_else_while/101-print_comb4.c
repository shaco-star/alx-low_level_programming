#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all triple digit numbers
 * combination separated by ,
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int i, j, k;

	for (i = 0 ; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if ((i + j + k) != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
