#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coins to make change for an amount of money
 * @args: parameter entry
 * @argv: arguments
 * Return: 0
 */
int main(int args, char *argv[])
{
	int  m, token = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; m >= 0;)
	{
		if (m >= 25)
			m -= 25;
		else if (m >= 10)
			m -= 10;
		else if (m >= 5)
			m -= 5;
		else if (m >= 2)
			m -= 2;
		else if (m >= 1)
			m -= 1;
		else
			break;
		token += 1;
	}
	printf("%d\n", token);
	return (0);
}
