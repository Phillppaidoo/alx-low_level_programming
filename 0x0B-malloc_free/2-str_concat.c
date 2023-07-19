#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - concatenates 2 strings.
  * a NULL string is treated as an empty string.
  *@s1: pointer to string.
  *@s2: pointer to string.
  *Return: pointer to newly allocated memory which
  *has s1, s2 and null byte.
  *NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, m, n;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/*check if malloc was successful */
	if (nstr == NULL)
		return (NULL);

	m = 0;
	while (m < len1)
	{
		nstr[m] = s1[m];
		m++;
	}
	n = 0;
	while (m <= size)
	{
		nstr[m] = s2[n];
		m++;
		n++;
	}
	return (nstr);
}
