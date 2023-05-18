#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *				followed by a new line
 * @n: The number passed into the function
 *
 * Return: void
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
