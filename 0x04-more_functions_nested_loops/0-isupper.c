#include "main.h"


/**
 * _isupper - the function checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */


int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	else
		return (0);
}
