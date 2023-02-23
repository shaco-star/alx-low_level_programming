#include<stdio.h>
#include"main.h"

/**
 * main - entry point
 *
 * Description: print numbers from 1 to 100 if
 * number multiples by 3 print Fizz, if by 5 print Buzz
 * if both print FizzBuzz
 *
 * Return: 0 success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (num != 100)
			printf(" ");
		else
			printf("\n");

	}

	return (0);
}
