/*
** EPITECH PROJECT, 2020
** my showstr
** File description:
** vf
*/
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

static char letteraa(long long a)
{
    if (a == 10)
        return 97;
    if (a == 11)
        return 98;
    if (a == 12)
        return 99;
    if (a == 13)
        return 100;
    if (a == 14)
        return 101;
    if (a == 15)
        return 102;
    else
        return (a + 48);
}

char *my_convert_hex_xmin(long long nb)
{
    long long prem = nb;
    int sec = 0;
    int h = 0;
    if (nb == 0)
        return ("0");
    char *azer = malloc(sizeof(char) * 2000+1);
    while (prem > 0) {
        sec = prem % 16;
        prem /= 16;
        azer[h] = letteraa(sec);
        h++;
    }
    azer[h] = '\0';
    azer = my_revstr(azer);
    return (azer);
}