# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 13:50:42 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/22 13:52:02 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04
FLAGS = -Wall -Werror -Wextra

SRCS = ex04.cpp
OBJS = ex04.o


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