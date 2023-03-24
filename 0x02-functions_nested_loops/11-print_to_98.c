#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: character to be checked
 *
 * Return: 0
 */

void print_to_98(int n)
{
	    	int i, j;

		    	if (n <= 98)
				    	{
						    	for (i = n ; i <= 98 ; i++)
								    	{
										    	if (i != 98)
												            	printf("%d, ", i);
											    	else if (i == 98)
													            	printf("%d\n", i);

