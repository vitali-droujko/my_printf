/*
** EPITECH PROJECT, 2020
** mystrlen
** File description:
** disp nb char of str
*/

int  my_strlen(char  const *str)
{
    int c = 0;
    while (str[c] != '\0') {
        c++;
    }
    return c;
}
