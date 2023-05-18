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
    int num, i;

    for (num = 0; num <= 9; num++)
    {
        for (i = 0; i <= 9; i++)
        {
            printf("%d, ", num * i);
        }
        printf("\n");
    }
}
