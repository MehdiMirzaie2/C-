
NAME        := zombie

SRCS        := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS        := main.o Zombie.o newZombie.o randomChump.o
CC          := c++
CFLAGS      := -Wall -Wextra -Werror -g -std=c++98
RM          := rm -f
MAKEFLAGS   += --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
