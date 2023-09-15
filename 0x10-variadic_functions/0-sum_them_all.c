#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that calculates the sum of its parameters
 * @n: number of arguements passed into the function
 * Return: 0 if n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
