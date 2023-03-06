#include"main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: board of size 8 columns
*/

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; a[r] !='\0'; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}
