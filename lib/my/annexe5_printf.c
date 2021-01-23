/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** annexe printfa 5
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void print_plusd(va_list list)
{
    int str = va_arg(list, int);

    if (str > 0) {
        my_putchar('+');
        str *= (-1);
    }
    my_put_nbr(str);
    return;
}