/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** annexe 4 printfa
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void print_spaced(va_list list)
{
    my_putchar(' ');
    int str = va_arg(list, int);
    my_put_nbr(str);
}

void print_c(va_list list)
{
    char c = va_arg(list, int);
    write(1, &c, 1);
}

void print_S(va_list list)
{
    char *str = va_arg(list, char *);
    my_showstroct(str);
}

void print_xmin(va_list list)
{
    long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmin(nb));
}

void print_spacexmin(va_list list)
{
    my_putchar(' ');
    long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmin(nb));
}