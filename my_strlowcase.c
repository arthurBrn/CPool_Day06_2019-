/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** Task 09
*/

#include <stdlib.h>
int my_strlen(char const *src);

char *my_strlowcase(char *str)
{
    int i = 0;
    int size = my_strlen(str);

    if (str[i] == '\0')
        return (str);
    while (i < size) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}
