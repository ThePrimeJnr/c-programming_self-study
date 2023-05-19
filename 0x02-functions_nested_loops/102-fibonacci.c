#include "main.h"

/**
 * main -   prints the first 50 Fibonacci numbers,
 *          starting with 1 and 2, followed by a new line
 *
 * Return: Always 0, (Success)
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  18-05-2023
*/

int main(void)
{
	long prev = 1, curr = 2, count, sum;

	printf("1, 2");

	for (count = 2; count < 50; count++)
	{
		sum = prev + curr;

		printf(", %ld", sum);

		prev = curr;
		curr = sum;
	}

	return (0);
}
