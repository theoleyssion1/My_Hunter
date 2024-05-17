/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** create_window
*/

#include "main.h"
#include <stdlib.h>

void init_window(game_t *game)
{
    game->window = malloc(sizeof(window_t));
    game->window->videomode.bitsPerPixel = 32;
    game->window->videomode.height = 720;
    game->window->videomode.width = 1080;
    game->window->window = sfRenderWindow_create(game->window->videomode
                            , "My_Hunter", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(game->window->window, 60);
}
