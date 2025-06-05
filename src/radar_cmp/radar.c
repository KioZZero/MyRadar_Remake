/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** radar.c
*/

#include "myradar.h"

void radar(char *filename)
{
    radar_cmp_t *radar_cmp = init_radar_cmp();

    parsing(radar_cmp, filename);
    return;
}
