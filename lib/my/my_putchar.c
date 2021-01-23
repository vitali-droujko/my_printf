/*
** EPITECH PROJECT, 2020
** uhi
** File description:
** sbsr
*/

#include <unistd.h>

void my_putchar( char c)
{
    write(1, &c, 1);
}
