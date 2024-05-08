# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 16:47:44 by tlassere          #+#    #+#              #
#    Updated: 2024/05/08 16:49:02 by tlassere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			::= c++
CXXFLAGS	::= -Wall -Wextra -Werror -std=c++98
NAME		::= HI_THIS_IS_BRAIN
SOURCES		::= main.cpp
OBJS		::= $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
