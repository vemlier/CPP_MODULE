# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 13:52:42 by chukim            #+#    #+#              #
#    Updated: 2022/10/26 13:52:43 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
SRC			=	main.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp \
				AAnimal.cpp
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
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