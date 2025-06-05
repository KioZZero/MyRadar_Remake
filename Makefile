##
## EPITECH PROJECT, 2024
## Untitled (Workspace)
## File description:
## Makefile
##

SRC	=	./src/main.c \
		./src/conditions.c \
		./src/my_compare_func.c \
		./src/my_print_func.c \
		./src/radar_cmp/radar.c \
		./src/radar_cmp/parse_information.c \
		./src/radar_cmp/init_struct.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -Wall -Wextra -Werror

FLAGCSFML =	-lcsfml-graphics -lcsfml-window -lcsfml-system

FLAGCSFML +=	-lcsfml-audio -lcsfml-network -lm

NAME	=	myradar

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(FLAGCSFML) $(CFLAGS)

clean:
	$(RM) $(NAME) $(OBJ)

fclean:	clean

re:	fclean all
