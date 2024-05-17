/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** draw_menu
*/

#include "main.h"

void draw_menu(game_t *game)
{
    event_start(game);
    sfRenderWindow_clear(game->window->window, sfBlack);
    sfRenderWindow_drawSprite(game->window->window,
        IMG[BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        IMG[PLAY].sprite, NULL);
    sfRenderWindow_display(game->window->window);
}
