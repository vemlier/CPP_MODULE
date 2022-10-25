# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 09:50:23 by chukim            #+#    #+#              #
#    Updated: 2022/10/20 09:50:51 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp
OBJS		=	$(SRC:.cpp=.o)
CC		=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
EXE_NAME	=	-o $(NAME)
EXEC		=	$(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(EXE_NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re run