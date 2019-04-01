/*
** ETNA PROJECT, 11/12/2018 by koster_m
** my_putnbr
** File description:
**      print n
*/

#include "lib.h"


void my_putnbr(int input)
{
    unsigned int n = input;

    if (input < 0) {
        my_putchar('-');
        n -= input;
    }
    if (n > 9) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    } else
        my_putchar(n + '0');
}