#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print text using write() function
 *
 * Return: Error(1)
 * 
*/

int main(void)
{
	char q = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);

	return (1);

}
