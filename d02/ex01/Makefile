# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 17:37:34 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/23 17:37:36 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
FLAGS = -Wall -Werror -Wextra

SRCS = Fixed.cpp main.cpp
OBJS = Fixed.o main.o


all: $(NAME)

$(OBJS): %.o: %.cpp
	@clang $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)