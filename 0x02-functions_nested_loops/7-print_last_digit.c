#include "main.h"

/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: input number (to be treated) as an integer.
*
* Return: last digit of number
*/
int print_last_digit(int n)
{
int lastDigit;

lastDigit = n % 10;
if (lastDigit < 0)
{
_putchar(-lastDigit + 48);
return (-lastDigit);
		}
	else
	{
	_putchar(lastDigit + 48);
	return (lastDigit);
	}
}

