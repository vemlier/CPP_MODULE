# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:02:13 by chukim            #+#    #+#              #
#    Updated: 2022/09/17 14:02:13 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00
SRC			=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp
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

.PHONY:	all clean fclean re