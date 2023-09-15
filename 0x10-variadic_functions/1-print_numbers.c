#include "variadic_functions.h"

/**
 *  print_numbers - prints out numbers given as parameters
 * @separator: string to be seperated between numbers
 * @n: number of arguements passed into the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}