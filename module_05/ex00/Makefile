# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 21:23:41 by ejahan            #+#    #+#              #
#    Updated: 2022/08/18 15:22:50 by ejahan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Bureaucrat.cpp 

OBJS		=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra

NAME		=	Bureaucrat

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
