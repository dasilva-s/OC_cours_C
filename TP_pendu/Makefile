# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 12:00:59 by stde-alm          #+#    #+#              #
#    Updated: 2021/11/12 12:21:56 by stde-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c fonction.c imp_pendu.c

OBJS	= ${SRCS:.c=.o}

NAME	= tp_pendu

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g

RM		= rm -f

${NAME} :	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re