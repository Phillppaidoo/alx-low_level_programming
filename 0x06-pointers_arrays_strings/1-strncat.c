#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c;

for (i = 0; dest[i] != 0; i++)
;
for (c = 0; src[c] != 0 && n > 0; c++, n--)
{
dest[i] = src[c];
i++;
}
dest[i] = 0; /* add null terminator to the end of `dest` */
return (dest);
}
