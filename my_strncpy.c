/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Task 02
*/

int my_strlen(char const *src);

// got helloA
// expected hello

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int length = my_strlen(src);

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > length) {
        dest[i] = '\0';
    }

    return (dest);
}
