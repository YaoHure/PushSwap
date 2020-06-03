/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** list_b.c
*/
#include "../include/my.h"
#include <stdlib.h>

void pb(int *l_a , int *l_b, push_swap_t *size)
{
    int index = 0;
    int size_bis = size->size_b;

    for (int i = size_bis; i > 0; i--) {
        l_b[i] = l_b[i - 1];
    }
    l_b[0] = l_a[0];
    while (l_a[index]) {
        l_a[index] = l_a[index + 1];
        index++;
    }
    size->size_a--;
    size->size_b++;
}
