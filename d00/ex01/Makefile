# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 18:50:07 by bogoncha          #+#    #+#              #
#    Updated: 2019/10/21 09:03:56 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FLAGS = -Wall -Werror -Wextra
SRCSDIR = .

SRCS = Phonebook.cpp Contact.cpp main.cpp
OBJS = Phonebook.o Contact.o main.o


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