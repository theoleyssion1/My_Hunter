/*
** EPITECH PROJECT, 2023
** main
** File description:
** tkt
*/

#include "main.h"
#include <stdio.h>


int main(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            puts("  DESCRIPTION\n        it is a remake of Duck Hunt\n");
            puts("    INPUT\n        left-click to shoot bird\n");
            return 0;
        }
        return 84;
    }
    if (argc == 1) {
        game();
        return 0;
    }
    return 84;
}
