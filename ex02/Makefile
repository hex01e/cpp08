# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 15:37:29 by houmanso          #+#    #+#              #
#    Updated: 2024/01/24 15:37:33 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Mutated
SRC		= $(wildcard *.cpp)
HDR		= $(wildcard *.hpp)
OBJ		= $(SRC:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME)	:$(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $@

%.o : %.cpp $(HDR)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean
