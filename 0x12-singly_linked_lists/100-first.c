#include<stdio.h>

/**
 * premain - fun run before main
*/

void __attribute__ ((constructor)) permain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
