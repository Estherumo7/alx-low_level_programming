#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers from n to 98
 * @n: The number to start printing from
 *
 * Description: This function prints numbers from the input number n to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
