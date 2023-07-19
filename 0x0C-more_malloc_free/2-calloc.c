#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < (nmemb * size); c++)
	{
		*((char *)(p) + c) = 0;
	}

	return (p);
}
