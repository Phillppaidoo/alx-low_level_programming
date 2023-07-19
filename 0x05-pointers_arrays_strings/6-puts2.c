#include "main.h"
/**
 *puts2 - prints every other character in string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts2(char *str)
{
int l;
l = 0;
while (str[l] != 0)
{
if (l % 2 == 0)
{
_putchar(str[l]);
}
l++;
}
_putchar(10);
}
