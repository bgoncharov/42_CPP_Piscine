# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 11:47:53 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/21 11:50:56 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
FLAGS = -Wall -Werror -Wextra

SRCS = Account.class.cpp tests.cpp
OBJS = Account.class.o tests.o


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