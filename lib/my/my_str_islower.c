/*
** EPITECH PROJECT, 2020
** str is alpha
** File description:
** bf
*/

void my_putchar(char c);

int my_pow(int j, int b);

int my_put_nbr(int nb);

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}
