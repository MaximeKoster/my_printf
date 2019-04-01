/*
** ETNA PROJECT, 25/01/2019 by koster_m
** my_printf
** File description:
**      decimal to base
*/

#include "lib.h"

void my_putnbr_base(float input, float base)
{
    float n = input;
    float nb = base;

    if (input < 0) {
        my_putchar('-');
        n -= input;
    }
    if (n > nb - 1) {
        while (n > base) {
            n = n / base;
        }
        my_putchar((int) n % (int) base + '0');
        while (n < input) {
            n = n * base;
            my_putchar((int) n % (int) base + '0');
        }
    } else
        my_putchar(n + '0');
}