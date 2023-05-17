#include "main.h"

/**
 * jack_bauer -	prints every minute of the day of Jack Bauer,
 *				starting from 00:00 to 23:59
 *
 * Return: void
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{

			if (hour < 10)
			{
				printf("0%d:", hour%10);
			}
			else
			{
				printf("%d%d:", hour/10, hour%10);
			}

			if (min < 10)
			{
				printf("0%d\n", min%10);
			}
			else
			{
				printf("%d%d\n", min/10, min%10);
			}
		}
	}
}
