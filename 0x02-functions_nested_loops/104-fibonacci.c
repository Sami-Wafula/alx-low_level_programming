#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;
	for (i = 0; i < 100; i++)
	{
		printf("%ld\n", j);
		next = j + k;
		j = k;
		k = next;

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
