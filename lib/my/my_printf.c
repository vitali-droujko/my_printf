/*/*
** EPITECH PROJECT, 2020
** uhi
** File description:
** myprintf
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"
#include "pointer.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int my_hash(char *format, int j, va_list list)
{
    char hash[] = {'o', 'x', 'X', 'd', 0};
    int i = 0;
    while (format[j + 2] != hash[i] && i < 4)
        i++;
    if (i > 3) {
        my_putchar(format[j]);
        my_putchar(format[j + 1]);
        j += 2;
    }
    else {
        hash_ptr[i](list);
        j += 3;
    }
    return j;
}

int my_plus(char *format, int j, va_list list)
{
    char plus[] = {'d', 'i', 'o', 'u', 'x', 'X', 0};
    int i = 0;
    while (format[j + 2] != plus[i] && i < 6)
        i++;
    if (i > 5) {
        my_putchar(format[j]);
        my_putchar(format[j + 1]);
        j += 2;
    }
    else {
        plus_ptr[i](list);
        j += 3;
    }
    return j;
}

int my_space(char *format, int j, va_list list)
{
    char space[] = {'d', 'i', 'o', 'u', 'x', 'X', 0};
    int i = 0;
    while (format[j + 2] != space[i] && i < 6)
        i++;
    if (i > 5) {
        my_putchar(format[j]);
        my_putchar(format[j + 1]);
        j += 2;
    }
    else {
        space_ptr[i](list);
        j += 3;
    }
    return j;
}

int my_cont(int i, char *format, va_list list)
{
        int j = 0;
    char t[] = {'b', 's', 'd', 'i', 'c', 'S', 'p', 'X', 'x',
    'u', 'o', 'f', 'F', '%', 0};
    while (t[j] != format[i + 1] && j < 13)
        j++;
    if (format[i + 1] == '#')
        i = my_hash(format, i, list);
    else if (format[i + 1] == '+')
        i = my_plus(format, i, list);
    else if (format[i + 1] == ' ')
        i = my_space(format, i, list);
    else if (format[i + 1] == '%')
        my_putchar('%'), i += 2;
    else if (j == 13) {
        my_putchar(format[i]);
        my_putchar(format[i+1]);
        i += 2;
    } else {
        (*fun_ptr[j])(list);
        i += 2;
    }
    return i;
}

int my_printf(char *format, ...)
{
    va_list list;
    va_start (list, format);
    int i = 0;
    while (format[i] != '\0') {
        if (format[i] != '%') {
            my_putchar(format[i]);
            i++;
        }
        else
            i = my_cont(i, format, list);
    }
    va_end (list);
    return 0;
}