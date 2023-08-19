# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 12:32:13 by nbeaufil          #+#    #+#              #
#    Updated: 2023/08/19 10:50:08 by nbeaufil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp			\
		Animal.cpp			\
		Cat.cpp				\
		Dog.cpp				\
		wrongCat.cpp		\
		wrongAnimal.cpp		\
		brain.cpp

OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME = abstractClass

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
