# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/31 13:10:29 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/31 13:10:37 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
FLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

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