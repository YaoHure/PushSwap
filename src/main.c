/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** main.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            nb = nb * 10 + str[i] - 48;
    }
    if (str[0] == '-')
        nb = nb * (-1);
    return (nb);
}

int main(int ac, char **av)
{
    int *l_a = malloc(sizeof(int) * (ac - 1));
    int *l_b = malloc(sizeof(int) * (ac - 1));
    int verif;
    push_swap_t size;
    size.size_a = ac - 1;
    size.size_b = 0;

    if (ac == 1) {
        return (84);
    }
    for (int i = 1; i < ac; i++) {
        l_a[i - 1] = my_getnbr(av[i]);
    }
    verif = verif_sort(l_a, size.size_a);
    if (verif != 0)
        push_swap(l_a, l_b, ac, &size);
    else
        write(1, "\n", 1);
    return (0);
}
