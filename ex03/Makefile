# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 18:05:30 by tlassere          #+#    #+#              #
#    Updated: 2024/05/08 18:06:21 by tlassere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			::= c++
CXXFLAGS	::= -Wall -Wextra -Werror -std=c++98
NAME		::= Unnecessary_violence
SOURCES		::= main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
OBJS		::= $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
