# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 09:51:37 by ppetchda          #+#    #+#              #
#    Updated: 2022/04/19 10:21:42 by ppetchda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c \
	push_swap_instruction_1.c \
	push_swap_instruction_2.c \
	push_swap_instruction_3.c \
	push_swap_stack_1.c \
	push_swap_stack_2.c \
	push_swap_utility_1.c

OBJS = $(SRCS:.c=.o)

NAME		= push_swap
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

bonus: all

debug: 
	$(CC) -g $(CFLAGS) $(SRCS)

.PHONY: all clean fclean re bonus debug
