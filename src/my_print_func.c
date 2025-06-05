/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** my_print_func.c
*/

#include "myradar.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    return;
}
