/*
** EPITECH PROJECT, 2020
** myisneg
** File description:
** N if  <0 or P if >= 0;
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }
    else if (n >= 0) {
        my_putchar('P');
    }
    my_putchar('\n');
    return (0);
}
