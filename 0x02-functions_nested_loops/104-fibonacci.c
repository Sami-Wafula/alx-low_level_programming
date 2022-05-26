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
	for (i = 3; i < 100; i++)
	{
		printf("%ld\n", next);
		j = k;
		k = next;
		next = j + k;
	}

	return (0);
}
