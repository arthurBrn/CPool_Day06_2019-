/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** Task 04
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_char_into_other_string){
    char dest[6];

    my_strncpy(dest, "HelloWorld" , 5);
    cr_assert_str_eq(dest, "Hello");
}
