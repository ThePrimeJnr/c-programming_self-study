#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: The last digit of the number
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}

	printf("%d", last_digit);

	return (last_digit);
}
