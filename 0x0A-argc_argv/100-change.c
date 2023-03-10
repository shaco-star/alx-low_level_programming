#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - main entry point for the program
 *
 * @argc: number of items entered in the command line
 * @argv: array of strings for entered commands
 *
 * Return: 0 Success
*/

int main(int argc, char *argv[])
{
	int coins, cents;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins += cents / 25;
	cents = cents % 25;

	coins += cents / 10;
	cents = cents % 10;

	coins += cents / 5;
	cents = cents % 5;

	coins += cents / 2;
	cents = cents % 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}


