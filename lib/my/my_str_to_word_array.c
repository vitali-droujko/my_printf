/*
** EPITECH PROJECT, 2020
** my_str_word_array
** File description:
** split
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int  my_putstr(char  const *str);

char **premdimf(char const *str)
{
    char **t;
    int premdim = 0, i = 0, z = 0;
    while (str[i] != '\0') {
        z = 0;
        while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
        || (str[i] >= 97 && str[i] <= 122)) {
            i++;
            z = 1;
        }
        if (str[i] != '\0')
            i++;
        if (z == 1) {
            premdim++;
        }
    }
    t = malloc(sizeof(char *)*(premdim+1));
    return t;
}

char **secdimf(char const *str)
{
    char **t = premdimf(str);
    int secdim = 0, h = 0, z = 0, i = 0;
    while (str[i] != '\0'){
        secdim = 0;
        z = 0;
        while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
        || (str[i] >= 97 && str[i] <= 122)) {
            i++;
            z = 1;
            secdim++;
        }
        if (str[i] != '\0')
            i++;
        if (z == 1) {
            t[h] = malloc(secdim+1);
            h++;
        }
    }
    return t;
}

char **my_str_to_word_array(char const *str)
{
    char **t = secdimf(str);
    int i = 0, a = 0, p, j;
    while (str[i] != '\0')
    {
        j = 0, p = 0;
        for ( ;(str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
        || (str[i] >= 97 && str[i] <= 122); j++, i++) {
            t[a][j] = str[i];
            p = 1;
        }
        if (str[i] != '\0')
            i++;
        if (p == 1) {
            t[a][j] = '\0';
            a++;
        }
    }
    t[a] = NULL;
    return t;
}
