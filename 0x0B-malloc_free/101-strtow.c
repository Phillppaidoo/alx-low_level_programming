#include <stdlib.h>
#include <stdio.h>
/**
 * wordnos - counts no of words in a given string
 * @s: pointer to the string
 * Return: No. of words in the string (int)
 */
int wordnos(char *s)
{
	int m, n, o;

	m = 0;
	o = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			m = 0;
		else if (m == 0)
		{
			m = 1;
			o++;
		}
	}
	return (o);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (m = 0; m <= len; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (c)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = m;
	}

	matrix[k] = NULL;

	return (matrix);
}
