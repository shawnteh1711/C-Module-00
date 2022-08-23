# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: steh <steh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 17:07:14 by steh              #+#    #+#              #
#    Updated: 2022/08/23 14:42:53 by steh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp
NAME	=	megaphone
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address
CC		=	c++	

all		: 	$(NAME)
			./$(NAME)

# $(OBJS)	:	$(SRCS)
# 			$(CC) $(CFLAGS) $(SRCS) -c

$(NAME)	:	$(OBJS)
			@$(CC) $(CFLAGS) $^ -o $(NAME)

clean	:
			rm -f $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re