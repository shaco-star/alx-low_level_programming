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

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}


