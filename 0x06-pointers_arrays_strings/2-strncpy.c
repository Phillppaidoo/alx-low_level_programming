#include "main.h"
#include <stdio.h>
/**
 *_strncpy - function that copies a string
 * @dest: The destination of the string
 * @src: The source of strings
 * @n: The length of int
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != 0 && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = 0;
i++;
}
return (dest);
}
