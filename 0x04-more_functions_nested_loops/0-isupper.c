#include "main.h"

/**
 * _isupper - uppercase letters
 *
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1l);
	else
		return (0);
}
