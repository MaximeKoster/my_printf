/*
** ETNA PROJECT, 25/01/2019 by koster_m
** my_printf
** File description:
**      printf but it's mine
*/

#include "lib.h"

void first_batch_scid(char c, va_list ap)
{
    switch (c) {
    case 's':
        my_putstr(va_arg(ap, char * ));
        break;
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 'i':
        my_putnbr(va_arg(ap, int));
        break;
    case 'd':
        my_putnbr(va_arg(ap, int));
        break;
    }
}

void second_batch_ouxX(char c, va_list ap)
{
    switch (c) {
    case 'o':
        my_putnbr_base(va_arg(ap, int), 8);
        break;
    case 'u':
        put_unsigned(va_arg(ap, int));
        break;
    case 'x':
        my_puthexa(va_arg(ap, int), 0);
        break;
    case 'X':
        my_puthexa(va_arg(ap, int), 1);
        break;
    case '%':
        my_putchar('%');
    }
}

void arg_analyse(char *string, va_list ap)
{
    int i;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '%') {
            if (string[i + 1] == 's' || string[i + 1] == 'c'
                || string[i + 1] == 'i' || string[i + 1] == 'd') {
                first_batch_scid(string[i + 1], ap);
                i++;
            } else if (string[i + 1] == 'o' || string[i + 1] == 'u' ||
                       string[i + 1] == 'x' || string[i + 1] == 'X' ||
                       string[i + 1] == '%') {
                second_batch_ouxX(string[i + 1], ap);
                i++;
            }
        } else {
            my_putchar(string[i]);
        }
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    arg_analyse(str, ap);
    va_end(ap);
    return (0);
}