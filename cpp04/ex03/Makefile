# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 12:32:13 by nbeaufil          #+#    #+#              #
#    Updated: 2023/08/19 16:19:55 by nbeaufil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	AMateria.cpp		\
		Character.cpp		\
		cure.cpp			\
		ice.cpp				\
		main.cpp			\
		MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME = interface

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

.SILENT:
