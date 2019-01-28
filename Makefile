# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haskonat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 21:44:12 by haskonat          #+#    #+#              #
#    Updated: 2019/01/27 21:52:20 by haskonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
