#include "main.h"
/**
 *rev_string - reverse the string.
 *@s: pointer to string.
 *
 *Return: void.
 */
void rev_string(char *s)
{
int m, n, o, temp;
m = 0;
while (s[m] != 0)
{
m++;
}
o = 0;
n = m - 1;
while (o < n)
{
temp = s[o];
s[o] = s[n];
s[n] = temp;
o++;
n--;
}
}
