# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:23:28 by chukim            #+#    #+#              #
#    Updated: 2022/10/13 12:17:34 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	replace
SRC			=	main.cpp 
OBJS		=	$(SRC:.cpp=.o)
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES		=	a.replace

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(FILES);
	
re:	fclean all

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

test: all
	./$(NAME) a a good

.PHONY:	all clean fclean re test1 test2 test3 test4