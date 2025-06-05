/*
** EPITECH PROJECT, 2024
** MyRadar_Remake
** File description:
** conditions.c
*/

#include "myradar.h"

static void display_h(void)
{
    my_putstr("Air traffic simulation panel\nUSAGE\n");
    my_putstr("  ./myradar [OPTIONS] path_to_script\n");
    my_putstr("  path_to_script    The path to the script file.\n");
    my_putstr("OPTIONS\n  -h                print the usage and quit.\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("  \'L\' key           enable/disbale hitboxes and aress.\n");
    my_putstr("  \'S\' key           enable/disbale sprites.\n");
    return;
}

static int is_file(char *filename)
{
    FILE *file = fopen(filename, "r");

    if (!file)
        return -1;
    fclose(file);
    return 0;
}

int conditions(int argc, char **argv)
{
    if (argc == 1)
        return ERROR;
    if (argc == 2 && my_strcmp(argv[1], "-h") == 0){
        display_h();
        return NOERROR;
    }
    if (argc != 2 && is_file(argv[1]) != 0)
        return ERROR;
    radar(argv[1]);
    return NOERROR;
}
