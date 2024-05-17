/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** destroy
*/

#include "main.h"
#include <stdlib.h>

static void destroy_sprite(game_t *game)
{
    for (int i = 0; i != TOTAL_SPRITE; i++) {
        sfSprite_destroy(game->sprite[i].sprite);
        sfTexture_destroy(game->sprite[i].texture);
        sfClock_destroy(game->sprite[i].clock);
    }
    free(game->sprite);
}

void destroy(game_t *game)
{
    destroy_sprite(game);
    sfRenderWindow_destroy(game->window->window);
    free(game->window);
}
