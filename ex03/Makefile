# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 10:38:22 by ddyankov          #+#    #+#              #
#    Updated: 2023/08/31 16:29:28 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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