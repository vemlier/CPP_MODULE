# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:22:14 by chukim            #+#    #+#              #
#    Updated: 2022/09/29 17:21:45 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex03
SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
cFLAGS		=	-Wall -Wextra -Werror -std=c++98

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