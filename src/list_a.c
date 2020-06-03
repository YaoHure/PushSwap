/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** list_a.c
*/
#include "../include/my.h"
#include <stdlib.h>

void pa(int *l_a , int *l_b, push_swap_t *size)
{
    int index = 0;
    int size_bis = size->size_a;

    for (int i = size_bis; i > 0; i--) {
        l_a[i] = l_a[i - 1];
    }
    l_a[0] = l_b[0];
    while (l_b[index]) {
        l_b[index] = l_b[index + 1];
        index++;
    }
    size->size_a++;
    size->size_b--;
}

void ra(int *l_a, push_swap_t *size)
{
    int save = l_a[0];
    for (int i = 0; i < size->size_a - 1; i++)
        l_a[i] = l_a[i + 1];
    l_a[size->size_a - 1] = save;
}
