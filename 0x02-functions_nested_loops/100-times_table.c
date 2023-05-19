#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n:  The number passed into the function to print the times table
 *      If n is greater than 15 or less than 0 the function print nothing
 *
 * Return: void
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  18-05-2023
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int num, mul, prod;

		for (num = 0; num <= n; num++)
		{
			printf("0");

				for (mul = 1; mul <= n; mul++)
			{
				prod = num * mul;

				if (prod <= 9)
				{
					printf(",   %d", prod);
				}
				else if (prod <= 99)
				{
					printf(",  %d", prod);
				}
				else
				{
					printf(", %d", prod);
				}

			}
			printf("\n");
		}
	}
}
