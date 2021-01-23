/*
** EPITECH PROJECT, 2020
** myh
** File description:
** myh
*/
#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
void my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
char *my_strcat(char *, char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);
char **my_str_to_word_array(char const *);
char *my_strdup(char const *);
char **premdimf(char const *);
char **secdimf(char const *);
int my_pow(int, int);
int my_showstrbin(char const *);
int my_showstroct(char const *);
int my_printf(char *, ...);
char *my_convert_hex_xmax(long long);
char *my_convert_hex_xmin(long long);
void my_convert_oct(unsigned int);
void my_convert_bin(int);
void print_s(va_list);
void print_d(va_list);
void print_c(va_list);
void print_S(va_list);
void print_xmin(va_list);
void print_xmax(va_list);
void print_o(va_list);
void print_f(va_list);
void print_b(va_list);
void print_u(va_list);
void print_p(va_list);
void floata(double);
int my_bina(unsigned int a);
void my_convert_unsign(unsigned int nb);
void my_convert_p(long long str);
void print_F(va_list list);
void print_hasho(va_list list);
void print_hashxmax(va_list list);
void print_hashxmin(va_list list);
void print_spacexmax(va_list list);
void print_spaceo(va_list list);
void print_spaceu(va_list list);
void print_spaced(va_list list);
void print_spacexmin(va_list list);
void print_plusd(va_list list);
int my_hash(char *format, int j, va_list list);
int my_plus(char *format, int j, va_list list);
int my_space(char *format, int j, va_list list);

#endif /* MY_H_ */