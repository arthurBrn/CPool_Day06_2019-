/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Task 05
*/

int my_strlen(char const *str);
void my_putchar(char c);

int search_for_occurence(int index, char const *to_find, char *str)
{
    int i = 0;
    int length = my_strlen(to_find);
    char *holder;
    int count = 0;
    int *nullPointer = NULL;

    while (str[index] == to_find[i] && length > 0) {
        holder[i] = str[index];
        index++;
        i++;
    }
    for (int z = 0; z < my_strlen(holder); z++) {
        if (holder[z] == to_find[z]) {
            count++;
        }
    }
    if (count == my_strlen(to_find))
        return (&holder);
    else
        return nullPointer;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    char to_find_first_char = to_find[0];

    while (str[i] != '\0') {
        if (str[i] == to_find_first_char) {
            search_for_occurence(i, to_find, str);
        }
        i++;
    }
}
