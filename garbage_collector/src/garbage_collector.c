/*
** EPITECH PROJECT, 2019
** garbage_collector.c
** File description:
** functions for garbage_collector
*/

#include "garbage_collector.h"

/***************************************************
La fonction call_before_main affichera le message
"Bonjour\n" avant l'entré dans la fonction main.
Celle-ci devra être appelé sans modifier la fonction
main...

Pour réaliser l'exercice je t'invite à regarder le
lien suivant:
https://gcc.gnu.org/onlinedocs/gcc/Common-Function-
Attributes.html#Common-Function-Attributes
****************************************************/
void call_before_main(void)
{

}

/***************************************************
La fonction call_after_main affichera le message
"Au revoir\n" après avoir quitté la fonction main.
Celle-ci devra être appelé sans modifier la fonction
main...
****************************************************/
void call_after_main(void)
{

}

/***************************************************
Ce troisième exercice se déroulera dans le fichier
include/garbage_collector.h.
Tu devras faire un structure pour une liste simplement
chaîné, ne contenant uniquement un pointeur next
(pointant sur le prochain élément) et un void *ptr.
****************************************************/

/***************************************************
La fonction add_ptr_to_garbage_collector_t ajoutera
le pointeur ptr à la liste chaîné garbage_collector
et retournera la variable garbage_collector
(première node de la liste chaîné).
****************************************************/
garbage_collector_t *add_ptr_to_garbage_collector_t \
(garbage_collector_t *garbage_collector, void *ptr)
{
    (void)ptr;               //Pour éviter les warning, à retier
    (void)garbage_collector; //lors ce que tu commences à coder.

    return (NULL);
}

/***************************************************
La fonction destroy_ptr_to_garbage_collector_t
libérera (free) tout les pointeurs contenus dans la
liste chaîné garbage_collector.
****************************************************/
void destroy_ptr_to_garbage_collector_t(garbage_collector_t *garbage_collector)
{
    (void)garbage_collector; //Pour éviter les warning, à retier
                             //lors ce que tu commences à coder.
}
