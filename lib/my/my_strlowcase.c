/*
** EPITECH PROJECT, 2020
** str lowcase
** File description:
** fv
*/

void my_putchar(char c);

int  my_putstr(char  const *str);

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}