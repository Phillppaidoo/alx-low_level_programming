#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: integer representing ascii value of character
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
