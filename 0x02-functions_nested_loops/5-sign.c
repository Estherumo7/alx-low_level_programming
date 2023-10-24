#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function checks the sign of the input number and prints
 * either +, -, or 0 accordingly.
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);  /* '+' */
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);  /* '-' */
		return (-1);
	}
	else
	{
		_putchar(48);  /* '0' */
		return (0);
	}
}
