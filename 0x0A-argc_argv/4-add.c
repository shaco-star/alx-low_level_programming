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
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];
		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error");
				return (1);
			}
			p++;
		}
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


