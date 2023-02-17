#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: find if number greater than 5, less than 6
 * or zero
 * 
 * Return: 0
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit > 5)	
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit != 0 && digit <6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

	return (0);
}
