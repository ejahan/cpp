# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 17:03:34 by ejahan            #+#    #+#              #
#    Updated: 2022/05/04 03:10:33 by ejahan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Harl.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra

NAME		=	exec

RM			=	rm -rf

.cpp.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
