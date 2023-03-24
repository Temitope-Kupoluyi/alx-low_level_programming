#include "main.h"

/**
 * _abs - function that computes the absolute value of the integer
 *
 * @d: character to be checked
 *
 * Return: dDG
 */

int _abs(int d)
{
	if (d < 0)
		d = -(d);
	else if (d >= 0)
		d = d;
	return (d);
}
