/*
** ETNA PROJECT, $2018
** $MY_STRLEN
** File description:
**      Day 03 Stage 1
*/

void my_putchar(char c);

int my_strlen(char *str)
{
    int value = 0;

    while (str[value] != '\0') {
        value++;
    }
    return value;
}