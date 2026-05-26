# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibettenc <ibettenc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/21 13:20:59 by ibettenc          #+#    #+#              #
#    Updated: 2026/05/26 17:13:00 by ibettenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###################################################
## ARGUMENTS

NAME = Harl

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98


###################################################
## SOURCES

SRC = main.cpp Harl.cpp 

OBJ = $(SRC:.cpp=.o)

###################################################
## RULES

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

##################################################
## CLEAN

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all  clean fclean re