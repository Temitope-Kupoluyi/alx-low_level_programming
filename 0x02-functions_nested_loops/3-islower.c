#include "main.h"
/**
 * _islower - function to check for lowercase character
 *
 * @c: character to be printed
 *
 * Return: 1 if it is lower case
 * and 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
