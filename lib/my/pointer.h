/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** function pointer
*/

#include <stdarg.h>

#ifndef POINTER_H_
#define POINTER_H_

void (*fun_ptr[])(va_list) = {print_b, print_s, print_d, print_d,
    print_c, print_S, print_p, print_xmax, print_xmin, print_u,
    print_o, print_f, print_F, 0};

void (*hash_ptr[])(va_list) = {print_hasho, print_hashxmin,
    print_hashxmax, print_d, 0};

void (*plus_ptr[])(va_list) = {print_plusd, print_plusd, print_o,
    print_u, print_xmin, print_xmax, 0};

void (*space_ptr[])(va_list) = {print_spaced, print_spaced,
    print_spaceo, print_spaceu, print_spacexmin, print_spacexmax,  0};

#endif /* POINTER_H_ */