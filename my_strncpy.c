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
    int full_length = length + n;

    while (src[i] != src[n] && length != full_length) {
        dest[i] = src[i];
        i++;
        full_length--;
    }
    if (n > length) {
        dest[i + 1] = '\0';
    }

    return (dest);
}
