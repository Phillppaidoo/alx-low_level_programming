#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments a program receives.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}
	return (0);
}
