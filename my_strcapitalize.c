/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Task 10
*/

char capitalize_it(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
}

char lower_it(char c)
{
    return (c + 32);
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[i] == '\0')
        return (str);
    str[0] = capitalize_it(str[0]);
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') && str[i - 1] != ' ')
            str[i] = lower_it(str[i]);
        if (str[i] == ' ')
            str[i + 1] = capitalize_it(str[i + 1]);
        i++;
    }
    return (str);
}
