/*
** EPITECH PROJECT, 2020
** strup case
** File description:
** ed
*/

void my_putchar(char c);

int  my_putstr(char  const *str);

char *my_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}