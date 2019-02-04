SRC = ft_display.c ft_find.c ft_rushes.c main.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = colle-2

all: $(NAME)

$(NAME): $(SRC)
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)

re: fclean all
