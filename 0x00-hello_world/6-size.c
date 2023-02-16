#include <stdio.h>

/*
 * main - Entry point of program
 *
 * Description: Program that print size of different data types in C
 *
 * Return: Always 0
*/

int main(void)
{

	printf("Size of a char: %d byte(s)",sizeof(char));
	printf("Size of an int: %d byte(s)",sizeof(int));
	printf("Size of an double: %d byte(s)",sizeof(double));
	printf("Size of a long int: %d byte(s)",sizeof(long int));
	printf("Size of a long long int: %d byte(s)",sizeof(long long int));
	printf("Size of a float: %d byte(s)",sizeof(float));

	return(0);
}
