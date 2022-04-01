#include <stdio.h>
/**
 * main - prints number of args passed onto itself
 * @argc: argument counter
 * @argv: argument array
 *
 * Retun: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
