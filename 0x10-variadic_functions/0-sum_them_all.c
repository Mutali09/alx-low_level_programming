#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints sum of parameters.
 * @n: The number of parameters
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0. Otherwise the sume of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int r, sum = 0;

	va_start(ap, n);
	for (r = 0; r < n; r++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
