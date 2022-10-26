# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 13:50:20 by chukim            #+#    #+#              #
#    Updated: 2022/10/26 13:50:21 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00
SRC			=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp 
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
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