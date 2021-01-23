/*
** EPITECH PROJECT, 2020
** revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int a = 0;
    while (str[a] != '\0') {
        a++;
    }
    int q = a / 2;
    int i = 0;
    a--;
    while (i != q) {
        char temp;
        temp = str[a];
        str[a] = str[i];
        str[i] = temp;
        i++;
        a--;
    }
    return str;
}
