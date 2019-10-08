/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Task 02
*/

int my_strlen(char const *src);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int length = my_strlen(src);

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (n > length) {
        dest[i + 1] = '\0';
    }

    return (dest);
}
