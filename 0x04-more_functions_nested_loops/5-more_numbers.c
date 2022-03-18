#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int n, ch;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar((m / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
