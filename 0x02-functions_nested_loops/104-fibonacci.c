#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, next;

	j = 1;

	k = 2;

	printf("%lu", j);

	for (i = 1; i < 100; i++)
	{
		printf(", %lu", k);
		next = j + k;
		j = k;
		k = next;

			
	}
	putchar('\n');
	return (0);
}
