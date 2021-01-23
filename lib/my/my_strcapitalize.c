/*
** EPITECH PROJECT, 2020
** str capitalize
** File description:
** rv
*/

void my_putchar(char c);

int  my_putstr(char  const *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    str = my_strlowcase(str);
    if (str[i] <= 122 && str[i] >= 97)
        str[i] -= 32;
    while (str[i] != '\0') {
        if ((str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == ' ')
        && (str[i] <= 122 && str[i] >= 97)) {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}
