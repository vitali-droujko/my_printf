/*
** EPITECH PROJECT, 2020
** my sort in array
** File description:
** ev
*/

void my_swap(int *a, int *b);

void my_swapmodifa(int *x, int *y)
{
    if (*x < *y)
        my_swap(x, y);
}

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        j = 0;
        while (j < size) {
            my_swapmodifa(&tab[i], &tab[j]);
            j++;
        }
        i++;
    }
}