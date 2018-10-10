# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 11:14:39 by vordynsk          #+#    #+#              #
#    Updated: 2018/10/01 11:14:41 by vordynsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializator
SRC  = main.cpp Serializator.cpp
INCL = Serializator.hpp
OBJ  = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
CL  = clang++
RM  = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CL) $(FLAGS) $(OBJ) -o $(NAME) -I $(INCL)

%.o: %.cpp
	@$(CL) -o $@ -c $< $(FLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
