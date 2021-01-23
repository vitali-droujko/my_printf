/*
** EPITECH PROJECT, 2020
** dbg
** File description:
** dbgnd
*/

char *my_strncpy(char *dest , char  const *src , int n)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
