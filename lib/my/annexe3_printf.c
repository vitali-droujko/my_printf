/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** annexe 3
*/

#include "my.h"

void print_hasho(va_list list)
{
    my_putstr("0");
    unsigned int nb = va_arg(list, unsigned int);
    my_convert_oct(nb);
}

void print_hashxmax(va_list list)
{
    my_putstr("0X");
    long long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmax(nb));
}

void print_hashxmin(va_list list)
{
    my_putstr("0x");
    long nb = va_arg(list, long long);
    my_putstr(my_convert_hex_xmin(nb));
}

void print_f(va_list list)
{
    double nb = va_arg(list, double);
    floata(nb);
}

void print_F(va_list list)
{
    double nb = va_arg(list, double);
    floata(nb);
}