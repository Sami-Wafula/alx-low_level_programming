#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints it's name
 * @argc: number of arguments
 * @argv: array of all argument names
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
