SRC = book.cpp
OBJ = $(SRC:.cpp=.o)
NAME = book
CC = g++

%.o : %.cpp
	@$(CC) -c $< -o $@

all : $(NAME)
	@ echo "FINISHED MAKING!"

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re