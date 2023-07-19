#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate s1 and s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int u, v, w;
	char *s;

	if (s1 == NULL)
	{
		u = 0;
	}
	else
	{
		for (u = 0; s1[u]; ++u)
			;
	}
	if (s2 == NULL)
	{
		v = 0;
	}
	else
	{
		for (v = 0; s2[v]; ++v)
			;
	}
	if (v > n)
		v = n;
	s = malloc(sizeof(char) * (u + v + 1));
	if (s == NULL)
		return (NULL);
	for (w = 0; w < u; w++)
		s[w] = s1[w];
	for (w = 0; w < v; w++)
		s[w + u] = s2[w];
	s[u + v] = '\0';
	return (s);
}
