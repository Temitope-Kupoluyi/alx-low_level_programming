#include "main.h"

/**
 * _puts - This function prints a string
 * followed by a new line
 * @str: string value
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}