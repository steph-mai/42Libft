# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stmaire <stmaire@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 09:13:20 by stmaire           #+#    #+#              #
#    Updated: 2025/11/12 15:50:50 by stmaire          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
// wildcard * à remplacer par le nom de chaque fichier .c dans SRCS
SRCS = ft_*.c
HEADERS = libft.h
OBJ = $(patsubst %.c,%.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%o: %c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

