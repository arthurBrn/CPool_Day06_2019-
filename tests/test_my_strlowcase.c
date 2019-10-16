/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** Task 04
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, turning_maj_in_low)
{
    char src[6] = "LOWER";
    char *str;

    str = my_strlowcase(src);
    cr_assert_str_eq(str, "lower");
}

Test(my_strlowcase, testing_low_to_low)
{
    char src[6] = "lower";
    char *str;

    str = my_strlowcase(src);
    cr_assert_str_eq(str, "lower");
}

Test(my_strlowcase, string_with_low_and_maj)
{
    char src[6] = "lOwER";
    char *str;

    str = my_strlowcase(src);
    cr_assert_str_eq(str, "lower");
}

Test(my_strlowcase, empty_string)
{
    char src[0] = "\0";
    char *str;

    str = my_strlowcase(src);
    cr_assert_str_eq(str, "\0");
}
