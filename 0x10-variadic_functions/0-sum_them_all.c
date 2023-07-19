#include <stdarg.h>
/**
  *sum_them_all - returns the sum of all its parameters.
  *@n: number of arguments to be summed.
  *
  *Return: sum or 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, m;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
