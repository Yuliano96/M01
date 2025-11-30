# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 18:49:02 by ypacileo          #+#    #+#              #
#    Updated: 2025/11/30 19:04:00 by ypacileo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++ -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie
SRC = Zombie.cpp main.cpp newZombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all