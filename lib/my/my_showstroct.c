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

int my_showstroct(char const *str)
{
    int i = 0, j = 0, h, sec, prem, k;
    char dest[200000], azer[10];

    while (str[i] != '\0') {
        if ((str[i] >= 0 && str[i] < 32) || (str[i] > 127 && str[i] <= 255)) {
            prem = str[i], sec = 0, h = 0;
            for ( ; prem != 0; h++)
                sec = prem % 8, prem /= 8, azer[h] = sec + 48;
            for ( ; h != 3; h++) azer[h] = '0';
            azer[h] = '\0', my_revstr(azer), dest[j++] = '\\';
            for (k = 0; azer[k]; j++, k++)
                dest[j] = azer[k];
            i++;
        }
        else
            dest[j++] = str[i++];
    }
    dest[j] = '\0';
    my_putstr(dest);
    return 0;
}