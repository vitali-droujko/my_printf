/*
** EPITECH PROJECT, 2020
** myfindprimesup
** File description:
** disp fisrt nbp > parameter
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int l;
    l = my_is_prime(nb);
    if (l == 1) {
        return (nb);
    }
    else {
        return (my_find_prime_sup(nb + 1));
    }
}