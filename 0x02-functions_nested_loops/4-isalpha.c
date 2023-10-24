#include "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 * @c: The character to check
 *
 * Description: This function checks whether the input character is alphabetic.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
