#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  *
  * @c: The character to be checked.
  * Return: 1 if the c is a letter, lowercase or uppercase
  *
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
	    (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
