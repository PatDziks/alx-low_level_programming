#include "main.h"
/**
 * positive_or_negative - checks for postive or negative numbers
 *
 * @i: function to be checked
 *
 * Return: always be 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
