#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line\
 *
 * Return: Always 0, (Sucess)
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date:  17-05-2023
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
}
