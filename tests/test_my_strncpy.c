/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** Task 04
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_char_into_other_string)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld" , 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copie_space_empty_array_to_rename)
{
    char dest[12] = {0};

    my_strncpy(dest, "some hello world string right here", 18);
    cr_assert_str_eq(dest, "hello world");
}
