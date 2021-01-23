/*
** EPITECH PROJECT, 2020
** my function is printable
** File description:
** df
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 127)
            return 0;
        i++;
    }
    return (1);
}