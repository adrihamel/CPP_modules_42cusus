# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 19:57:28 by aguerrer          #+#    #+#              #
#    Updated: 2021/08/11 20:01:00 by aguerrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook
SRCS			= 	main.cpp PhoneBook.cpp Contact.cpp
OBJS			= 	$(SRCS:.cpp=.o)
CLANG			=	clang++ -Wall -Werror -Wextra
RM				=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: clean all

.PHONY: all, re, clean
