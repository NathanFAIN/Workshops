/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** test main
*/

#include "str_to_word_array.h"

int main(void)
{
    int nb;

    //Tests pour la fonction count_c_in_str:
    printf("Tests pour la fonction count_c_in_str:\n");
    nb = count_c_in_str('a', "abdbda");//              #1
    printf("You: %i   The good answer: %i\n", nb, 2);
    nb = count_c_in_str('a', "aaaaaaa");//             #2
    printf("You: %i   The good answer: %i\n", nb, 7);
    nb = count_c_in_str('a', "bcdbcdbcd");//           #2
    printf("You: %i   The good answer: %i\n", nb, 0);

    //Tests pour la fonction count_before_c_in_str:
    printf("\nTests pour la fonction count_before_c_in_str:\n");
    nb = count_before_c_in_str('a', "abdbda");//       #1
    printf("You: %i   The good answer: %i\n", nb, 0);
    nb = count_before_c_in_str('a', "bcba");//         #2
    printf("You: %i   The good answer: %i\n", nb, 3);
    nb = count_before_c_in_str('a', "bcd");//          #3
    printf("You: %i   The good answer: %i\n", nb, 3);

    return (0);
}
