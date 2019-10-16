/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isupper.c
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            count++;
        i++;
    }
    if (count == my_strlen(str))
        return (1);
    else
        return (0);
}