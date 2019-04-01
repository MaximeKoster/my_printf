/*
** ETNA PROJECT, 25/01/2019 by koster_m
** my_printf
** File description:
**      put_unsigned
*/

#include "lib.h"

void put_unsigned(unsigned int input)
{
    unsigned int n = input;

    if (n > 9) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    } else
        my_putchar(n + '0');
}