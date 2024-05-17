/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** bird
*/
#include "main.h"
#include <stdlib.h>

void bird_anim(game_t *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(IMG[BIRD].clock)) > 110) {
        IMG[BIRD].rect_int = sfSprite_getTextureRect(IMG[BIRD].sprite);
        IMG[BIRD].rect_int.left += 110;
        if (IMG[BIRD].rect_int.left >= 330)
            IMG[BIRD].rect_int.left = 0;
        sfSprite_setTextureRect(IMG[BIRD].sprite, IMG[BIRD].rect_int);
        sfClock_restart(IMG[BIRD].clock);
    }
}

void birdmove(game_t *game)
{
    int birdspeed = 2;

    sfSprite_move(IMG[BIRD].sprite, (sfVector2f){birdspeed, 0});
    IMG[BIRD].pos = sfSprite_getPosition(IMG[BIRD].sprite);
    if (IMG[BIRD].pos.x >= 1080) {
        IMG[BIRD].pos.y = (rand() % 610);
        IMG[BIRD].pos.x = -110;
        sfSprite_setPosition(IMG[BIRD].sprite, IMG[BIRD].pos);
    }
}

void kill_bird(game_t *game)
{
    IMG[BIRD].rect_float = sfSprite_getGlobalBounds(IMG[BIRD].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);

    IMG[BIRD].pos = sfSprite_getPosition(IMG[BIRD].sprite);
    if (sfFloatRect_contains(&IMG[BIRD].rect_float,
        game->mouse.x, game->mouse.y)) {
        IMG[BIRD].pos.y = (rand() % 610);
        IMG[BIRD].pos.x = -110;
        sfSprite_setPosition(IMG[BIRD].sprite, IMG[BIRD].pos);
    }
}
