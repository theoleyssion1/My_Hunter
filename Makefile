##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC		=	game.c\
			bird.c\
			create_window.c\
			draw_menu.c\
			event.c\
			init_all_sprite.c\
			loop.c\
			destroy.c

DIR_SRC        =    $(addprefix src/, $(SRC))

MAIN_SRC    =    src/main.c                        \

TEST        =    unit_test.c\

DIR_TESTS    =    $(addprefix tests/, $(TEST))

OBJ_DIR_SRC    =    $(DIR_SRC:.c=.o)

OBJ_MAIN    =    $(MAIN_SRC:.c=.o)

OBJ            =    $(OBJ_DIR_SRC) $(OBJ_MAIN)

CPPFLAGS    =    -I include/                        \

CFLAGS        =    -Wall -Wextra -ggdb3

GRAPHICS	= -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

NAME        =    my_hunter

$(NAME):    $(OBJ)
		gcc -o $(NAME) -g $(CFLAGS) $(OBJ) $(GRAPHICS)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf unit_tests
		rm -rf *.gcov
		rm -f $(NAME)

re:        fclean all

unit_tests:    re
		mkdir unit_tests
		gcc -o unit_tests/unit_tests $(DIR_SRC) $(DIR_TESTS)\
		$(CPPFLAGS) $(LDLIBS) --coverage -lcriterion

tests_run:    unit_tests
		./unit_tests/unit_tests

.PHONY: all clean fclean re tests_run
