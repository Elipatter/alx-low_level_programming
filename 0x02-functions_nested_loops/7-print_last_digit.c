#include "main.h"

/**
 * print_last_digit - A function taht prints a last digit
 *
 * @n: function parameter
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
