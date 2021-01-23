/*
** EPITECH PROJECT, 2020
** my strncmjp
** File description:
** bgu
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void my_putchar(char c);

int  my_putstr(char  const *str);

int  my_strncmp(char  const *s1 , char  const *s2, int n)
{
    int a;
    int i = 0;

    while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    a = (s1[i] - s2[i]);
    return a;
}
