/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** myradar.h
*/

#ifndef MYRADAR_H_
    #define MYRADAR_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <string.h>
    #include <dirent.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdlib.h>
    #include <math.h>
    #include <time.h>
    #define WIDTH 800
    #define HEIGHT 600
    #define NOERROR 0
    #define ERROR 84

typedef struct moving_s {
    char type;
    sfSprite *sprite;
    int delay;
    int step;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
} moving_t;

typedef struct radar_cmp_s {
    sfSprite *background;
    sfMusic *music;
    sfClock *clock;
    moving_t *moving;
    moving_t *next;
} radar_cmp_t;

int conditions(int argc, char **argv);
int my_strlen(const char *str);
int my_strcmp(char *str1, const char *str2);
void my_putstr(char *str);
void my_putchar(char c);
void radar(char *filename);
void parsing(radar_cmp_t *radar_cmp, char *filename);
moving_t *init_moving(void);
radar_cmp_t *init_radar_cmp(void);
#endif /* MYRADAR_H_ */
