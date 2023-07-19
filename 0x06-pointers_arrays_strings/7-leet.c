#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
int i, f;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (i = 0; s[i] != 0; i++)
{
for (f = 0; f < 10; f++)
{
if (s[i] == a[f])
{
s[i] = b[f];
}
}
}
return (s);
}
