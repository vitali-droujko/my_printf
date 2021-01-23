/*
** EPITECH PROJECT, 2020
** myputstr
** File description:
** disp str 1-1 char
*/

void my_putchar(char c);

int  my_putstr(char  const *str)
{
    int c = 0;
    while (str[c] != '\0') {
        my_putchar(str[c]);
        c++;
    }
    return (0);
}


