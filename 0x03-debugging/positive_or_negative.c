#include "main.h"

/**
 * positive_or_negative - print whether the value of n is positive or negative
 * @n: The number to be tested
 *
 * Return:  void
 *
 * Author:  Destiny Saturday (DestinedCodes)
 * Date:    19/07/2023
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
