/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** push_swap.c
*/
#include "../include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int mini_array(int *arr, push_swap_t *size)
{
    int mini = arr[0];
    int mini_index = 0;

    for (int i = 0; i < size->size_a; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
            mini_index = i;
        }
    }
    return (mini);
}

void push_swap(int *l_a, int *l_b, int ac, push_swap_t *size)
{
    int mini = mini_array(l_a, size);

    for (int i = 0; i < ac - 1; i++) {
        for (int j = 0; l_a[0] != mini; j++) {
            ra(l_a, size);
            write(1, "ra ", 3);
        }
        pb(l_a, l_b, size);
        write(1, "pb ", 3);
        mini = mini_array(l_a, size);
    }
    for (int x = 0; x < ac - 1; x++) {
        pa(l_a, l_b, size);
        if (x == ac - 2)
            write(1, "pa\n", 3);
        else
            write(1, "pa ", 3);
    }
}
