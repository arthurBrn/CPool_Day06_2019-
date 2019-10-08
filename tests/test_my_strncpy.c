/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** Task 04
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_one_word_in_another_string)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld" , 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_)
{
    char dest[11] = {0};

    my_strncpy(dest, "some hello world string right here", 10);
    cr_assert_str_eq(dest, "some hello");
}

Test(my_strncpy, copy_text_from_middle)
{
    char dest[13] = {0};

    cr_assert_str_eq(my_strncpy(dest, "helloA", 5), "hello");
}
