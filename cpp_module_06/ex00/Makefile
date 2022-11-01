# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 07:49:30 by chukim            #+#    #+#              #
#    Updated: 2022/11/01 07:50:13 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	converter
SRC			=	main.cpp \
				Converter.cpp
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
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

%.o : %.cpp
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ---------------------------------

test1: $(NAME)
	./$(NAME) 0

test2: $(NAME)
	./$(NAME) nan

test3: $(NAME)
	./$(NAME) 42.0f

.PHONY:	all clean fclean re run test1 test2 test3