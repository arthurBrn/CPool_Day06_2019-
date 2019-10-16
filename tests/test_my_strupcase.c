/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** Task 04
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, full_low_in_capital)
{
    char *src = "this is full low string (lol)";

    src = my_strupcase(src);
    cr_assert_str_eq(src, "THIS IS FULL LOW STRING (LOL)");
}

Test(my_strupcase, full_capital_in_capital)
{
    char *src = "FULL CAPITAL STILL";

    src = my_strupcase(src);
    cr_assert_str_eq(src, "FULL CAPITAL STILL");
}

Test(my_strupcase, full_capital_with_low_and_capital)
{
    char *src = "FuLl CaPiTaL sTiLl";

    src = my_strupcase(src);
    cr_assert_str_eq(src, "FuLl CaPiTaL sTiLl");
}

