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

NAME = check
SRC  = iter.cpp
OBJ  = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
CL  = clang++
RM  = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CL) $(FLAGS) $(OBJ) -o $(NAME) -I ./

%.o: %.cpp
	@$(CL) $(FLAGS) -o $@ -c $< -I ./

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all



