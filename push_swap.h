/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft/libft.h"
# include "libft/get_next_line.h"

typedef struct s_stack {
	int				top;
	unsigned int	capacity;
	int				*array;
}	t_stack;

bool				ft_is_number(char *number);
bool				ft_streq(const char *s1, const char *s2);
bool				is_sorted(t_stack *stack_a);
void				free_stack(t_stack *stack);

# define INSTRUCTIONS_BUFFER_SIZE 4096

t_stack				*create_stack(unsigned int capacity);
int					is_full(t_stack *stack);
int					is_empty(t_stack *stack);
void				push(t_stack *stack, int item);
int					pop(t_stack *stack);
int					peek(t_stack *stack);

void				do_sa(t_stack *stack_a, bool print);
void				do_sb(t_stack *stack_b, bool print);
void				do_ss(t_stack *stack_a, t_stack *stack_b, bool print);
void				do_pa(t_stack *stack_a, t_stack *stack_b, bool print);
void				do_pb(t_stack *stack_a, t_stack *stack_b, bool print);
void				do_ra(t_stack *stack_a, bool print);
void				do_rb(t_stack *stack_b, bool print);
void				do_rr(t_stack *stack_a, t_stack *stack_b, bool print);
void				do_rra(t_stack *stack_a, bool print);
void				do_rrb(t_stack *stack_b, bool print);
void				do_rrr(t_stack *stack_a, t_stack *stack_b, bool print);

void				print_stack(t_stack *stack_a);

void				push_swap(t_stack *stack_a, t_stack *stack_b);
#endif
