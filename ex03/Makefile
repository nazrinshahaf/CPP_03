NAME = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
EFLAGS = -Wshadow -Wno-shadow
RM = rm -f

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(EFLAGS) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./$(NAME)

.PHONY:	all clean fclean re test
