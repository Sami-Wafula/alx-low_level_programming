#include "main.h"

/**
 * main - print (a-x)x10
 *
 * Return: Always zero.
 */
void print_alphabet_x10(void);
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar((x)x10);
		x++;
	}
	_putchar('\n');
}
