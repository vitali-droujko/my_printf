/*
** EPITECH PROJECT, 2020
** my showstr
** File description:
** vf
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include <stdio.h>

int my_bina(unsigned int a)
{
    int i = 0, j = 0, prem, sec, h, k;
    char dest[200000], azer[10];

    if (a < 0)
        return 84;
    if (a == 0)
        my_putstr("0");
    if (a > 4294967295)
        return 84;
    while (a != '\0') {
        for ( ;a != 0; h++)
            sec = a % 2, a /= 2, azer[h] = sec + 48;
        azer[h] = '\0';
        my_revstr(azer);
    }
    my_putstr(azer);
    return 0;
}