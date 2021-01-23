/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** annexe2 printfa
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void print_xmax(va_list list)
{
    long long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmax(nb));
}

void print_spacexmax(va_list list)
{
    my_putchar(' ');
    long long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmax(nb));
}

void print_o(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);
    my_convert_oct(nb);
}

void print_spaceo(va_list list)
{
    my_putchar(' ');
    unsigned int nb = va_arg(list, unsigned int);
    my_convert_oct(nb);
}

void print_d(va_list list)
{
    int str = va_arg(list, int);
    my_put_nbr(str);
}