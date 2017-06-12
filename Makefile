##
## Makefile for n4s in /home/benoit.pingris/delivery/need4speed/n4s_package
##
## Made by benoit pingris
## Login   <benoit.pingris@epitech.net>
##
## Started on  Wed May  3 12:09:41 2017 benoit pingris
## Last update Sun Jun  4 21:48:25 2017 benoit pingris
##

CC	=	gcc

NAME	=	ai

SRC	=	srcs/ai.c				\
		srcs/main.c				\
		srcs/moves.c				\
		srcs/useful/avg.c			\
		srcs/useful/str_tab.c			\
		srcs/useful/free_gnl.c			\
		srcs/useful/my_putstr.c			\
		srcs/useful/my_strlen.c			\
		srcs/useful/my_strstr.c			\
		srcs/useful/my_getnbr.c			\
		srcs/useful/my_strcmp.c			\
		srcs/useful/my_putnbr.c			\
		srcs/get_next_line/get_next_line.c	\
		srcs/my_printf/func_printf_1.c		\
		srcs/my_printf/func_printf_2.c		\
		srcs/my_printf/my_basics_funcs_2.c	\
		srcs/my_printf/my_func1.c		\
		srcs/my_printf/my_func3.c		\
		srcs/my_printf/my_func4.c		\
		srcs/my_printf/my_func2.c		\
		srcs/my_printf/my_printf.c		\
		srcs/my_printf/my_basics_funcs.c      	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include -Wall -Wextra

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean

		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
