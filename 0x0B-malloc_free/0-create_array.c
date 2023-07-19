#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int y;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
	{
		arr[y] = c;
	}
	return (arr);
}
