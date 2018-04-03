##
## Makefile for Makefile in /home/lacroi_m/rendu/Piscine_C_J10/lib
## 
## Made by zemax DUC
## Login   <lacroi_m@epitech.net>
## 
## Started on  Mon Oct 12 11:58:30 2015 zemax DUC
## Last update Tue Apr  3 20:52:08 2018 DESKTOP-FQFT07H
##

CC	= cc

RM	= rm -f

NAME	= libmy.a

SRCS	=   my_getnbr.c \
            my_isneg.c \
            my_power_rec.c \
            my_put_nbr.c \
            my_putchar.c \
            my_putstr.c \
            my_revstr.c \
            my_str_isalpha.c \
            my_str_islower.c \
            my_str_isnum.c \
            my_str_isupper.c \
            my_str_to_wordtab.c \
            my_strcapitalize.c \
            my_strcat.c \
            my_strcmp.c \
            my_strcpy.c \
            my_strdup.c \
            my_strlen.c \
            my_strlowcase.c \
            my_strncmp.c \
            my_strncpy.c \
            my_strndup.c \
            my_strupcase.c \
            my_swap.c \

OBJS	= $(SRCS:.c=.o)

all:	$(NAME) $(OBJS) move

$(NAME): $(OBJS)
	 ar rc $(NAME) $(OBJS)
	 ranlib $(NAME)

move:
	 cp $(NAME) ../../

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) ../$(NAME)
	$(RM) $(NAME)

re: fclean all

.PHONY: all move clean fclean re
