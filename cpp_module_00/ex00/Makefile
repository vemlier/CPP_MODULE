# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 10:54:15 by chukim            #+#    #+#              #
#    Updated: 2022/09/29 16:08:28 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRC			=	megaphone.cpp
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

test1: all
	./$(NAME) "shhhhh... I think the students are asleep..."

test2: all
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(NAME)

.PHONY:	all clean fclean re test1 test2 test3