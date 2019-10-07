/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** Task 04
*/

#include <criterion/criterion.h>

Test(my_revstr, revsring_string)
{
    char src;

    my_revstr(src, "bamos");
    cr_assert_str_eq(src, "somab");
}
