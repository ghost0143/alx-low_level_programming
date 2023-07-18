#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
		last_digit = 8; /* Last digit of INT_MIN is 8 */
	else
	{
		last_digit = n % 10;
		if (last_digit < 0)
			last_digit *= -1;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
