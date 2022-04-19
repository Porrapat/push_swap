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

struct Stack {
	int top;
	unsigned int capacity;
	int *array;
};

void	ft_putstr(char *s);

struct Stack*	createStack(unsigned int capacity);
int				isFull(struct Stack* stack);
int				isEmpty(struct Stack* stack);
void			push(struct Stack* stack, int item);
int				pop(struct Stack* stack);
int				peek(struct Stack* stack);

void			do_sa(struct Stack *stack_a);
void			do_sb(struct Stack *stack_b);
void			do_ss(struct Stack *stack_a, struct Stack *stack_b);
void			do_pa(struct Stack *stack_a, struct Stack *stack_b);
void			do_pb(struct Stack *stack_a, struct Stack *stack_b);
void			do_ra(struct Stack *stack_a);
void			do_rb(struct Stack *stack_b);
void			do_rr(struct Stack *stack_a, struct Stack *stack_b);
void			do_rra(struct Stack *stack_a);
void			do_rrb(struct Stack *stack_b);
void			do_rrr(struct Stack *stack_a, struct Stack *stack_b);

#endif
