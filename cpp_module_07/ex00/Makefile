# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 09:29:50 by chukim            #+#    #+#              #
#    Updated: 2022/11/17 09:31:09 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00
SRC			=	main.cpp
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
EXE_NAME	=	-o $(NAME)
EXEC		=	$(NAME)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(EXE_NAME)

run : $(NAME)
	./$(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(EXEC)
	
re : fclean all

%.o : %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re run