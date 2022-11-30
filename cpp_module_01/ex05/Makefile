# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chukim <chukim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 14:25:30 by chukim            #+#    #+#              #
#    Updated: 2022/11/30 09:59:58 by chukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex05
SRC			=	main.cpp \
				Harl.cpp 
OBJS		=	$(SRC:.cpp=.o)
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re:	
	make fclean
	make all

.PHONY:	all clean fclean re