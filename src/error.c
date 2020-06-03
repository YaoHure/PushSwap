/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** error.c
*/

#include "../include/my.h"

int is_alpha(int ac, char **av)
{
    int i = 0;

    for (ac = 0; ac < i; ac++){
        if (av[i][0] >= 'a' && av[i][0] <= 'z')
            return (84);
        else if (av[i][0] >= 'A' && av[i][0] <= 'Z')
            return (84);
        else
            return (1);
    }
    return (0);
}
