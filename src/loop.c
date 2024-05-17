/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** loop
*/

#include "main.h"

void loop_start(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_start(game);
        draw_menu(game);
    }
}

void loop_game(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_game(game);
        sfRenderWindow_clear(game->window->window, sfBlack);
        sfRenderWindow_drawSprite(game->window->window,
                                    IMG[BACKGROUND].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
                                    IMG[BIRD].sprite, NULL);
        sfRenderWindow_display(game->window->window);
    }
}
