/*
** EPITECH PROJECT, 2020
** power rec
** File description:
** power rec nb **p
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    }
    int res;
    if (p > 0) {
        res = nb * my_compute_power_rec(nb, p - 1);
    }
    else {
        return (0);
    }
    return res;
}
