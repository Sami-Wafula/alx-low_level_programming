#include "main.h"
#include <stdio.h>

/**
 * main - generates integers from 1 to 100
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (1 <= 100; i++;)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("%d\n", i);

	return (0);
}
