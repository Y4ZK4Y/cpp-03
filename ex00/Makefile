NAME := claptrap

SRC := ClapTrap.cpp main.cpp
OBJ := $(SRC:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -g -fsanitize=address

RM = /bin/rm -rf

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
