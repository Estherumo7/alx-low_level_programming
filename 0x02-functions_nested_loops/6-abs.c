#include "main.h"

/**
 * _abs - Computes the absolute value of a number
 * @c: The number to compute the absolute value of
 *
 * Description: This function calculate the absolute value of the input number.
 *
 * Return: The absolute value of the input number.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
