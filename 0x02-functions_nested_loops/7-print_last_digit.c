#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @a: The number to compute the last digit
 *
 * Description: This function computes and prints the last digit of a number.
 *
 * Return: The last digit.
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}

