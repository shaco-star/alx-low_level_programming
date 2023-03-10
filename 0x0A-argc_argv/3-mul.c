#include<stdio.h>
#include<stdlib.h>

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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}


