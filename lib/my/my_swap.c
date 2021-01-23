/*
** EPITECH PROJECT, 2020
** myswap
** File description:
** swap 2 integer
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
