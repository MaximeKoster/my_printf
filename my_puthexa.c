/*
** ETNA PROJECT, 25/01/2019 by koster
** my_printf
** File description:
**      decimal to hexa
*/

#include "lib.h"

void hexa_analyse(int n, int maj)
{
    if (maj == 0) {
        if (n > 9)
            my_putchar(87 + n);
        else
            my_putchar(n + '0');
    } else {
        if (n > 9)
            my_putchar(55 + n);
        else
            my_putchar(n + '0');
    }
}

void my_puthexa(float input, int maj)
{
    float n = input;

    if (input < 0) {
        my_putchar('-');
        n -= input;
    }
    if (n > 15) {
        while (n > 16) {
            n = n / 16;
        }
        hexa_analyse((int) n % 16, maj);
        while (n < input) {
            n = n * 16;
            hexa_analyse((int) n % 16, maj);
        }
    } else
        hexa_analyse(n, maj);
}