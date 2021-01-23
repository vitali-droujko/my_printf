/*
** EPITECH PROJECT, 2020
** square root
** File description:
** return square of nb
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int c;
    c = i * i;
    while (c < nb) {
        c = i * i;
        i++;
    }
    if (c == nb)
        return (i - 1);
    else
        return (0);
}
