/*
** ETNA PROJECT, 11/12/2018 by koster_m
** MY_LS
** File description:
**      lib.h
*/

#ifndef LIB
#define LIB

#include <stdlib.h>
#include <stdarg.h>

void my_putchar(char c);

void put_unsigned(unsigned int input);

void my_putstr(char *str);

int my_strlen(char *str);

void my_putnbr_base(float input, float base);

void my_puthexa(float input, int maj);

void hexa_analyse(int n, int maj);

void my_putnbr(int input);

int my_printf(char *str, ... );

#endif