/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** %f
*/

#include "my.h"
#include <unistd.h>
#include <stdio.h>

void floata(double nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    my_put_nbr((int)nb);
    my_putchar('.');
    int i = 0;
    while (i < 6 && (int)(nb * 10) % 10 != 0) {
        nb *= 10;
        my_putchar((int)nb % 10 + 48);
    }
}