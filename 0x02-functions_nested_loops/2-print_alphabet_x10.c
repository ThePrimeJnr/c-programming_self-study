#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 *                  in lowercase, followed by a new line
 *
 * Return: Always 0, (Sucess)
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			putchar(alphabet);
		}

		putchar('\n');
	}
}
