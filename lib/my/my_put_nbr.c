/*
** EPITECH PROJECT, 2020
** myputnbr
** File description:
** disp numb
*/

void my_putchar(char c);

int my_pow(int j, int b)
{
    int c = 1;
    while (j != 0) {
        c = b * c;
        j--;
    }
    return (c);
}

void my_put_nbr(int nb)
{
    int u = 0;
    if (nb == -2147483648) {
        nb += 1, nb *= -1, my_putchar('-'), u = 1;
    }
    else if (nb < 0 && nb != -2147483648) {
        my_putchar('-');
        nb = nb * (-1);
    }
    int c = nb;
    int i = 0;
    while (nb > 9) {
        nb = nb / 10;
        i++;
    }
    while (i != -1) {
        int b = (c / my_pow(i, 10));
        (i == 0 && u == 1) ? (my_putchar('8')) : (my_putchar((b % 10) + 48));
        i--;
    }
}