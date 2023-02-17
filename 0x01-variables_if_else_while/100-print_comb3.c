#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all double digit numbers separated by ,
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int i, j;

	for (i = 0 ; i < 9; i++)
	{

		for (j = i + 1; j < 10; j++)
		{

			putchar(i + '0');
			putchar(j + '0');

			if ((i + j) != 17)
			{
				putchar(',');
				putchar(' ');


			}
		}

	}
	putchar('\n');

	return (0);
}
