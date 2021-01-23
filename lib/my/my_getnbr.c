/*
** EPITECH PROJECT, 2020
** mygetnbr
** File description:
** retrun a nb st as str
*/

int  my_getnbr(char const *str)
{
    int i = 0, neg = 0, nbr = 0, pos = 1;
    while (str[i] != '\0' && (str[i] < 48 || str[i] > 57)) {
        if (str[i] == 45)
            neg++;
        i++;
    }
    int test = neg % 2;
    if (test == 1)
        pos = -1;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57 ) {
            nbr = (nbr * 10) + (str[i] - 48);
            i++;
        }
        else
            return (nbr * pos);
    }
    return (nbr * pos);
}
