NAME	= libmy.a

all: $(NAME)

$(NAME):
	cd lib/my && $(MAKE) $(NAME)


clean:
	cd lib/my && $(MAKE) clean

fclean:
	cd lib/my && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
