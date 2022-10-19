# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:25:30 by chukim            #+#    #+#              #
#    Updated: 2022/09/29 17:22:03 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex05
SRC			=	main.cpp \
				Harl.cpp 
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

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

.PHONY:	all clean fclean re