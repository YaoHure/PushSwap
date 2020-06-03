/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** verif.c
*/
#include "../include/my.h"

int verif_sort(int *arr, int size)
{
    int count = 0;

    for (int i = 0; i < (size - 1); i++) {
        if (arr[i] > arr[i + 1])
            count++;
    }
    return (count);
}
