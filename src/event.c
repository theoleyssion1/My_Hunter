/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** event
*/

#include "main.h"

void event_start(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);

    while (sfRenderWindow_pollEvent(game->window->window,
                                    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window->window);
        }
        if (game->mouse.x >= 350 && game->mouse.x <= 700
        && game->mouse.y >= 300 && game->mouse.y <= 440 &&
        game->window->event.type == sfEvtMouseButtonPressed)
            loop_game(game);
    }
}

void event_game(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
                                    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window->window);
        }
        if (game->window->event.type == sfEvtMouseButtonPressed) {
            kill_bird(game);
        }
    }
    bird_anim(game);
    birdmove(game);
}
