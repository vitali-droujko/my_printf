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

void my_convert_oct(unsigned int nb)
{
    unsigned int prem = nb;
    int sec = 0;
    int h = 0;
    if (nb == 0)
        my_putstr("0");
    if (prem < 0)
        prem *= (-1);
    char *azer = malloc(sizeof(char) * 200);
    while (prem != 0) {
        sec = prem % 8;
        prem /= 8;
        azer[h] = sec + 48;
        h++;
    }
    azer[h] = '\0';
    azer = my_revstr(azer);
    my_putstr(azer);
}