#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers separated by ,
 *
 * Return: 0 seccuss
 *
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{

		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
