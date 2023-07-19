#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
int i, u;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (u = 0; u < 52; u++)
{
if (a[u] == *(s + i))
{
*(s + i) = b[u];
break;
}
}
}
return (s);
}
