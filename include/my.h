/*
** EPITECH PROJECT, 2018
** MY.H
** File description:
** Yaowanart
*/

#ifndef MY_H_
#define MY_H_

typedef struct {
    int size_a;
    int size_b;
    int small;
}push_swap_t;

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);

int my_getnbr(char const *str);

void push_swap(int *l_a, int *l_b, int ac, push_swap_t *size);
int mini_array(int *arr, push_swap_t *size);

void pa(int *l_a , int *l_b, push_swap_t *size);
void ra(int *l_a, push_swap_t *size);

void rb(int *l_b);
void pb(int *l_a, int *l_b, push_swap_t *size);

int count_array(int *arr);

int is_alpha(int ac, char **av);

int verif_sort(int *arr, int size);

#endif
