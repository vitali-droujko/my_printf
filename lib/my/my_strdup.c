/*
** EPITECH PROJECT, 2020
** my strdupr
** File description:
** azer
*/

#include <stdlib.h>
#include <stdio.h>

int  my_strlen(char  const *str);

char *my_strcpy(char *dest , char  const *src);

char *my_strdup(char  const *src)
{
    char *t;
    int a;

    a = my_strlen(src);
    t = malloc(a + 1);
    my_strcpy(t, src);
    return t;
}
