/*
** ETNA PROJECT, $2018
** $MY_PUTCHAR_LIB
** File description:
** Fonction my_putchar pour la library
*/

#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}