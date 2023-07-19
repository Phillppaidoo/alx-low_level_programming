#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
int v;

if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
v = n * factorial(n - 1);
}
return (v);
}
