/*
** EPITECH PROJECT, 2023
** my
** File description:
** tkt
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>

typedef struct window_s {
    sfVideoMode videomode;
    sfRenderWindow *window;
    sfEvent event;
} window_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f pos;
    sfClock *clock;
    sfBool active;
    sfIntRect rect_int;
    sfFloatRect rect_float;
} sprite_t;

typedef struct game_s {
    window_t *window;
    sprite_t *sprite;
    sfVector2i mouse;
} game_t;



void bird_anim(game_t *game);
void birdmove(game_t *game);
void kill_bird(game_t *game);
void init_window(game_t *game);
void draw_menu(game_t *game);
void event_start(game_t *game);
void event_game(game_t *game);
int game(void);
void init_all_sprite(game_t *game);
void loop_start(game_t *game);
void loop_game(game_t *game);

#define IMG game->sprite
#define BACKGROUND 0
#define PLAY 1
#define BIRD 2
#define TOTAL_SPRITE 3
#endif /* !my */
