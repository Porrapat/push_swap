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

SRCS = srcs/push_swap/push_swap.c 		\
	srcs/shared/instruction_1.c 		\
	srcs/shared/instruction_2.c 		\
	srcs/shared/instruction_3.c 		\
	srcs/shared/stack_1.c 				\
	srcs/shared/stack_2.c 				\
	srcs/shared/utility_1.c 			\
	srcs/shared/utility_2.c 			\
	srcs/push_swap/radix_sort.c			\
	srcs/push_swap/radix_sort_2.c		\
	srcs/push_swap/normal_sort.c		\

SRCS_CHECKER = srcs/checker/checker.c 		\
	srcs/checker/execute.c					\
	srcs/checker/get_line.c					\
	srcs/checker/get_stack.c				\
	srcs/shared/instruction_1.c				\
	srcs/shared/instruction_2.c				\
	srcs/shared/instruction_3.c				\
	srcs/shared/stack_1.c					\
	srcs/shared/stack_2.c					\
	srcs/shared/utility_1.c					\
	srcs/shared/utility_2.c

OBJS = $(SRCS:.c=.o)

NAME			= push_swap
NAME_CHECKER	= checker
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra

all: $(NAME) $(NAME_CHECKER)

$(NAME):
	make -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -Ilibft -lft -Llibft -Isrcs/include

$(NAME_CHECKER):
	make -C libft
	$(CC) $(CFLAGS) $(SRCS_CHECKER) -o $(NAME_CHECKER) -Ilibft -lft -Llibft -Isrcs/include

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
	make -C libft
	$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME) -Ilibft -lft -Llibft -Isrcs/include

.PHONY: all clean fclean re bonus debug
