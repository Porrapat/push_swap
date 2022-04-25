/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_stack *stack_a)
{
	int	i;

	if (stack_a->top > 1)
	{
		i = stack_a->top;
		while (i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = stack_a->array[stack_a->top];
	}
	ft_putstr("ra\n");
}

void	do_rb(t_stack *stack_b)
{
	int	i;

	if (stack_b->top > 1)
	{
		i = stack_b->top;
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = stack_b->array[stack_b->top];
	}
	ft_putstr("rb\n");
}

void	do_rr(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_a->top > 1)
	{
		i = stack_a->top + 1;
		while (--i > 0)
			stack_a->array[i] = stack_a->array[i - 1];
		stack_a->array[0] = stack_a->array[stack_a->top];
	}
	if (stack_b->top > 1)
	{
		i = stack_b->top + 1;
		while (--i > 0)
			stack_b->array[i] = stack_b->array[i - 1];
		stack_b->array[0] = stack_b->array[stack_b->top];
	}
	ft_putstr("rr\n");
}
