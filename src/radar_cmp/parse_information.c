/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** parse_information.c
*/

#include "myradar.h"

void parse_line(radar_cmp_t *radar_cmp, char *line)
{
    // int i = 2;

    // while (line != '\n' || line != '\0'){

    // }
    printf("%s", line);
}

void parsing(radar_cmp_t *radar_cmp, char *filename)
{
    FILE *file = fopen(filename, "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read = getline(&line, &len, file);

    if (!file)
        my_putstr("no file");
    while (read != -1) {
        read = getline(&line, &len, file);
        parse_line(radar_cmp, line);
    }
    free(line);
    fclose(file);
}