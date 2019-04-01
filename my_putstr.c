/*
** ETNA PROJECT, $2018
** $MY_PUTSTR
** File description:
**              Day03 Stage 2
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    int value = 0;

    while (str[value] != '\0') {
        my_putchar(str[value]);
        value++;
    }
}