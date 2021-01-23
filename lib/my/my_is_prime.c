/*
** EPITECH PROJECT, 2020
** myfindprimesup
** File description:
** disp fisrt nbp > parameter
*/

int my_is_prime(int nb)
{
    if ((nb == 0) || (nb == 1)) {
        return (0);
    }
    int a = 0;
    for (int i = 2; i <= nb - 1; i++) {
            if (nb % i == 0) {
                a++;
            }
    }
    if (a == 0) {
        return (1);
    }
    else
        return (0);
}
