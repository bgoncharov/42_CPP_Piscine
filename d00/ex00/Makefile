# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 16:05:53 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/20 16:22:18 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = clang++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

all: $(NAME)

$(NAME):
		$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all