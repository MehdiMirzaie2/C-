
NAME        := strings

SRCS        := main.cpp
OBJS        := main.o
CC          := g++
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
