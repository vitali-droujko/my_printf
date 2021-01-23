/*
** EPITECH PROJECT, 2020
** strstrm
** File description:
** search and display strsub in strmain
*/
#include <stdio.h>

char *my_strstr(char *str , char  const *to_find)
{
    int i = 0, j = 0, p;
    if (str[i] == '\0' && to_find[j] == '\0') {
        return (str);
    }
    while (str[i] != '\0')
    {
        p = i;
        j = 0;
        while (str[i] == to_find[j] && to_find[j] != '\0') {
            i++;
            j++;
        }
        if (to_find[j] == '\0') {
            return (&str[p]);
        }
        i = p+1;
    }
    return (NULL);
}

