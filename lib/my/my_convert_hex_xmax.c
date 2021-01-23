/*
** EPITECH PROJECT, 2020
** my showstr
** File description:
** vf
*/
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

static char lettera(int a)
{
    if (a == 10)
        return 65;
    if (a == 11)
        return 66;
    if (a == 12)
        return 67;
    if (a == 13)
        return 68;
    if (a == 14)
        return 69;
    if (a == 15)
        return 70;
    else
        return (a + 48);
}

char *my_convert_hex_xmax(long long nb)
{
    long long prem = nb;
    int sec = 0;
    int h = 0;
    if (nb == 0)
        return ("0");
    char *azer = malloc(sizeof(char) * 200);
    while (prem != 0) {
        sec = prem % 16;
        prem /= 16;
        azer[h] = lettera(sec);
        h++;
    }
    azer[h] = '\0';
    azer = my_revstr(azer);
    return (azer);
}