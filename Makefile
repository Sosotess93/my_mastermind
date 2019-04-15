##
## Makefile for Makefile colle-1 in /home/charra_s/rendu/colle-1_15BhJ
## 
## Made by Sofiane Charrad
## Login   <charra_s@epitech.net>
## 
## Started on  Tue Apr 28 19:23:03 2015 Sofiane Charrad
## Last update Mon Apr 15 13:29:58 2019 sofiane
##

CC	=	gcc

RM	=	rm -f

##CFLAGS	+=	-g3 -I./ -Werror -Wextra -pedantic -ansi -Wall
CFLAGS		+=	-w

NAME	= my_mastermind

SRC	= ./src/main.c \
	  ./src/util.c \
	  ./src/init.c \
	  ./src/game.c \
	  ./src/affiche.c \
	  ./src/my_strcmp1.c \
	  ./src/my_putnbr.c

OBJ	=	$(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

all	: $(NAME) clean

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
