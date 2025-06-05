/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** my_compare_func.c
*/

#include "myradar.h"

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int my_strcmp(char *str1, const char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return -1;
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] != str2[i])
            return -1;
    return 0;
}
