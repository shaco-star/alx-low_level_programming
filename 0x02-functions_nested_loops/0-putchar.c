#include"main.h"

/**
 * main - Entry function
 *
 * Description: print word \"_putchar\"
 *
 * Return: 0 Success
*/

int main(void)
{
	char s[] = "_putchar";
	int _char;

	for (_char = 0; _char < 8; _char++)
		_putchar(s[_char]);
	_putchar('\n');

	return (0);
}
