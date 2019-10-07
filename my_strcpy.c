/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Task 01
*/

void my_putchar(char c);
int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src) {

    int length = my_strlen(src);

    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }

    return (dest);
}
