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
    char *str;

    //Tests pour la fonction count_c_in_str:
    printf("Tests pour la fonction count_c_in_str:\n");
    nb = count_c_in_str("abdbda", 'a');//              #1
    printf("Toi: %i   Attendu: %i\n", nb, 2);
    nb = count_c_in_str("aaaaaaa", 'a');//             #2
    printf("Toi: %i   Attendu: %i\n", nb, 7);
    nb = count_c_in_str("bcdbcdbcd", 'a');//           #2
    printf("Toi: %i   Attendu: %i\n", nb, 0);

    //Tests pour la fonction count_before_c_in_str:
    printf("\nTests pour la fonction count_before_c_in_str:\n");
    nb = count_before_c_in_str("abdbda", 'a');//       #1
    printf("Toi: %i   Attendu: %i\n", nb, 0);
    nb = count_before_c_in_str("bcba", 'a');//         #2
    printf("Toi: %i   Attendu: %i\n", nb, 3);
    nb = count_before_c_in_str("bcd", 'a');//          #3
    printf("Toi: %i   Attendu: %i\n", nb, 3);

    //Tests pour la fonction my_strndup:
    printf("\nTests pour la fonction my_strndup:\n");
    str = my_strndup("abdbda", 1);//       #1
    printf("Toi: %s   Attendu: %s\n", str, "a");
    free(str);
    str = my_strndup("bcba", 4);//         #2
    printf("Toi: %s   Attendu: %s\n", str, "bcba");
    free(str);
    str = my_strndup("bcd", 2);//          #3
    printf("Toi: %s   Attendu: %s\n", str, "bc");
    free(str);

    return (0);
}
