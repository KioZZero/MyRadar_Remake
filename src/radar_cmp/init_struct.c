/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** init_struct.c
*/

#include "myradar.h"

#include <SFML/Graphics.h>

sfSprite* init_sprite(const char* filename)
{
    sfTexture* texture = sfTexture_createFromFile(filename, NULL);
    sfSprite* sprite = sfSprite_create();

    if (!texture || !sprite)
        my_putstr("init_sprite");
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}


moving_t *init_moving(void)
{
    moving_t *moving = malloc(sizeof(moving_t));

    memset(moving, 0, sizeof(moving_t));
    return moving;
}

radar_cmp_t *init_radar_cmp_ex(radar_cmp_t *radar_cmp)
{
    radar_cmp->moving->delay = 0;
    radar_cmp->moving->start_x = 0;
    radar_cmp->moving->start_y = 0;
    radar_cmp->moving->end_x = 0;
    radar_cmp->moving->end_y = 0;
    radar_cmp->moving->step = 0;
    radar_cmp->moving->type = 'N';
    radar_cmp->moving->sprite;
    return radar_cmp;
}

radar_cmp_t *init_radar_cmp(void)
{
    radar_cmp_t *radar_cmp = malloc(sizeof(radar_cmp_t));

    memset(radar_cmp, 0, sizeof(radar_cmp_t));
    radar_cmp->clock = sfClock_create();
    radar_cmp->background;
    radar_cmp->music;
    radar_cmp->moving = init_radar_cmp_ex(radar_cmp);
    radar_cmp->next = NULL;
    return radar_cmp;
}

// moving_t *define_moving(moving_t *moving, char *line)
// {

// }