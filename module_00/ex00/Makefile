# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 19:02:44 by aguerrer          #+#    #+#              #
#    Updated: 2021/08/11 19:06:07 by aguerrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)
CLANG		=	clang++ -Wall -Werror -Wextra -std=c++98
RM		=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all, re, clean
