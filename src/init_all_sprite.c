/*
** EPITECH PROJECT, 2024
** B-MUL-100-BDX-1-1-myhunter-theo.leys-sion
** File description:
** init_main_menu_sprite
*/

#include "main.h"
#include <stdlib.h>

static void init_play_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/but.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, (sfVector2f){ 0.75, 0.75});
    sfSprite_setPosition(sprite->sprite, (sfVector2f){350, 300});
}

static void init_bird(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/piaf.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->scale = (sfVector2f) {1, 1};
    sprite->rect_int = (sfIntRect) {0, 0, 110, 100};
    sprite->pos = (sfVector2f) {110, 0};
    sprite->clock = sfClock_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_background(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/back.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, (sfVector2f) {4, 5});
}

void init_all_sprite(game_t *game)
{
    game->sprite = malloc(sizeof(sprite_t) * TOTAL_SPRITE);
    init_background(&game->sprite[BACKGROUND]);
    init_play_button(&game->sprite[PLAY]);
    init_bird(&game->sprite[BIRD]);
}
