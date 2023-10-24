#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * @c: Character to check
 *
 * Description: This function checks whether the input character is lowercase.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
