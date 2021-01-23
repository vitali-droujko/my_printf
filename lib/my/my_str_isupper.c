/*
** EPITECH PROJECT, 2020
** bdfb
** File description:
** my str is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 90 || str[i] < 65)
            return (0);
        i++;
    }
    return (1);
}