/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** Task 04
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, revsring_bamos_string)
{
    char *src = strdup("bamos");

    src = my_revstr(src);
    cr_assert_str_eq(src, "somab");
}

Test(my_revstr, reversing_several_words)
{
    char *src = strdup("string reversing");

    src = my_revstr(src);
    cr_assert_str_eq(src, "gnisrever gnirts");
}
