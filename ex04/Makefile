# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 17:23:41 by ddyankov          #+#    #+#              #
#    Updated: 2023/08/31 18:14:42 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Replace.cpp

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