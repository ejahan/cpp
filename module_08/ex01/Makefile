# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 16:05:43 by ejahan            #+#    #+#              #
#    Updated: 2022/08/18 15:59:06 by ejahan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Span.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	Span

RM			=	rm -rf

%.o:%.cpp
			${CC} -o $@ -c $< ${CFLAGS}

all:		${NAME}

$(NAME):	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
