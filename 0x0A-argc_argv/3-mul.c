#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int m, n;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	printf("%d\n", m * n);
	return (0);
}
