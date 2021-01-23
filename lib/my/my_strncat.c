/*
** EPITECH PROJECT, 2020
** mystrncat
** File description:
** add n charactere
*/
#include <stdio.h>

int  my_putstr(char  const *str);

char *my_strncat(char *dest , char  const *src , int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0' && j<nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}