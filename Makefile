# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 23:47:02 by akhoucha          #+#    #+#              #
#    Updated: 2018/01/04 23:47:04 by akhoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = fillit

LIB = fillit.h

SRC = check_map.c\
		display.c\
		free.c\
		check_links.c\
		main.c\
		map.c\
		basic_functions.c\
		reset.c\
		read.c\
		solve.c\
		tetri.c\
		tetriminos.c\
		final_tab.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
