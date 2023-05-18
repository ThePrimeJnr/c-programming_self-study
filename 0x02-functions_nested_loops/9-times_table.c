#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Void
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
*/

void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
		printf("0");

			for (mul = 1; mul <= 9; mul++)
		{
			prod = num * mul;

			if (prod <= 9)
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
