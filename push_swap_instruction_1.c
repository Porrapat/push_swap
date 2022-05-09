/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_stack *stack_a, bool print)
{
	int	temp;

	if (stack_a->top >= 1)
	{
		temp = stack_a->array[stack_a->top];
		stack_a->array[stack_a->top] = stack_a->array[stack_a->top - 1];
		stack_a->array[stack_a->top - 1] = temp;
	}
	if (print)
		ft_putstr_fd("sa\n", 1);
}

void	do_sb(t_stack *stack_b, bool print)
{
	int	temp;

	if (stack_b->top >= 1)
	{
		temp = stack_b->array[stack_b->top];
		stack_b->array[stack_b->top] = stack_b->array[stack_b->top - 1];
		stack_b->array[stack_b->top - 1] = temp;
	}
	if (print)
		ft_putstr_fd("sb\n", 1);
}

void	do_ss(t_stack *stack_a, t_stack *stack_b, bool print)
{
	int	temp;

	if (stack_a->top >= 1)
	{
		temp = stack_a->array[stack_a->top];
		stack_a->array[stack_a->top] = stack_a->array[stack_a->top - 1];
		stack_a->array[stack_a->top - 1] = temp;
	}
	if (stack_b->top >= 1)
	{
		temp = stack_b->array[stack_b->top];
		stack_b->array[stack_b->top] = stack_b->array[stack_b->top - 1];
		stack_b->array[stack_b->top - 1] = temp;
	}
	if (print)
		ft_putstr_fd("ss\n", 1);
}

void	do_pa(t_stack *stack_a, t_stack *stack_b, bool print)
{
	if (!is_empty(stack_b))
		push(stack_a, pop(stack_b));
	if (print)
		ft_putstr_fd("pa\n", 1);
}

void	do_pb(t_stack *stack_a, t_stack *stack_b, bool print)
{
	if (!is_empty(stack_a))
		push(stack_b, pop(stack_a));
	if (print)
		ft_putstr_fd("pb\n", 1);
}
