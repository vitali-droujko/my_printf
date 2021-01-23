/*
** EPITECH PROJECT, 2020
** strcata
** File description:
** join 2str
*/
#include <stdio.h>

int  my_putstr(char  const *str);

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}