#include"main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: board of size 8 columns
*/

void print_chessboard(char (*a)[8])
{
	int r, c;

	r = 0;
	c = 0;

	while (r < 64)
	{
		if (r % 8 == 0 && r != 0)
		{
			c = r;
			_putchar('\n');
		}
		_putchar(a[r / 8][r - c]);
		r++;
	}
	_putchar('\n');
}
