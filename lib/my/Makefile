##
## Makefile for Makefile in /home/lacroi_m/rendu/Piscine_C_J10/lib
## 
## Made by zemax DUC
## Login   <lacroi_m@epitech.net>
## 
## Started on  Mon Oct 12 11:58:30 2015 zemax DUC
## Last update Mon Oct 12 21:39:16 2015 zemax DUC
##

CC      = gcc -c

RM      = rm -f

NAME	= libmy.a

SRCS	= *.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	cp my.h ../../include
	cp libmy.a ../


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
