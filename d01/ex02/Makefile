# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 17:00:53 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/21 17:01:56 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
FLAGS = -Wall -Werror -Wextra

SRCS = Zombie.cpp ZombieEvent.cpp main.cpp
OBJS = Zombie.o ZombieEvent.o main.o


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