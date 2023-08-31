# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 10:42:49 by ddyankov          #+#    #+#              #
#    Updated: 2023/08/30 17:44:01 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g

all:$(NAME)

$(NAME): $(OBJ)
		@$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all