# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejahan <ejahan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 04:44:11 by ejahan            #+#    #+#              #
#    Updated: 2022/05/15 04:44:31 by ejahan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp 

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
