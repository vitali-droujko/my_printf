/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** annexe printfe
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void print_s(va_list list)
{
    char *str = va_arg(list, char *);
    my_putstr(str);
}

void print_b(va_list list)
{
    unsigned int str = va_arg(list, long unsigned int);
    my_bina(str);
}

void print_u(va_list list)
{
    my_putchar(' ');
    unsigned int str = va_arg(list, unsigned int);
    my_convert_unsign(str);
}

void print_spaceu(va_list list)
{
    unsigned int str = va_arg(list, unsigned int);
    my_convert_unsign(str);
}

void print_p(va_list list)
{
    long long str = va_arg(list, long long);
    my_convert_p(str);
}