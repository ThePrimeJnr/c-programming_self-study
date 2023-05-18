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
			printf("%02d:%02d\n", hour, min);
		}
	}
}
