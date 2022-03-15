#include "main.h"
/**
 * void print alphabet
 * lower a to z
 **/
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
