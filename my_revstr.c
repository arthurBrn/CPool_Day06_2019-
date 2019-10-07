/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Task 03
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char swap;
    int length = my_strlen(str);
    int half = length / 2;

    for (int i = 0; i < half; i++) {
        swap = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = swap;
    }
    return str;
}
