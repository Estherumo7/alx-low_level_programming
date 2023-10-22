#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}
