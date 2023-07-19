#include "3-calc.h"
/**
  *main - check arguments
  *@argc: argument count
  *@argv: argument vector.
  *
  *Return: error if number of arguments is wrong
  */
int main(int argc, char *argv[])
{
	int m = 0, n = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if theres only one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);
	res = (get_op_func(argv[2]))(m, n);
	printf("%d\n", res);
	return (0);
}
