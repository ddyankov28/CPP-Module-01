# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 10:38:22 by ddyankov          #+#    #+#              #
#    Updated: 2023/09/04 17:17:02 by ddyankov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(SRC:.cpp=.d)

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g 
# -MMD generates the dependency information
# -MP adds empty rules for header files to prevent errors if a header is deleted.

%.o: %.cpp
		$(CXX) $(CPPFLAGS) -c $< -o $@ 

all:$(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ) $(DEP)

fclean: clean
		rm -f $(NAME)

-include $(DEP) #include dependency files generated during the build process 
re: fclean all