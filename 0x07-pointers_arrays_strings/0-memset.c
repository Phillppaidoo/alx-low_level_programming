#include "main.h"

/**
 * _memset - function that fiills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int p = 0;

while (p < n)
{
s[p] = b;
p++;
}

return (s);
}
