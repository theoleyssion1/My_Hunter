/*
** EPITECH PROJECT, 2023
** menu
** File description:
** tkt
*/

#include "main.h"

int game(void)
{
    game_t game;

    init_window(&game);
    init_all_sprite(&game);
    loop_start(&game);
    return 0;
}
