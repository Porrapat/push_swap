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
	push_swap_utility_1.c \
	main.c

SRCS_CHECKER = checker.c \
	execute.c			\
	get_line.c			\
	push_swap.c			\
	get_stack.c			\
	push_swap_instruction_1.c \
	push_swap_instruction_2.c \
	push_swap_instruction_3.c \
	push_swap_stack_1.c \
	push_swap_stack_2.c \
	push_swap_utility_1.c \

OBJS = $(SRCS:.c=.o)

NAME			= push_swap
NAME_CHECKER	= checker
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra

all: $(NAME) $(NAME_CHECKER)

$(NAME):
	make -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -Ilibft -lft -Llibft

$(NAME_CHECKER):
	make -C libft
	$(CC) $(CFLAGS) $(SRCS_CHECKER) -o $(NAME_CHECKER) -Ilibft -lft -Llibft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	make -C libft clean

fclean:	clean
	rm -rf $(NAME)
	rm -rf $(NAME_CHECKER)
	make -C libft fclean

re:	fclean all

bonus: all $(NAME_CHECKER)

debug: 
	$(CC) -g $(CFLAGS) $(SRCS)

.PHONY: all clean fclean re bonus debug
