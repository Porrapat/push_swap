/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction_3.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_stack *stack_a, bool print)
{
	int	i;
	int	temp;

	if (stack_a->top >= 1)
	{
		i = 0;
		temp = stack_a->array[0];
		while (i < stack_a->top)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->top] = temp;
	}
	if (print)
		ft_putstr("rra\n");
}

void	do_rrb(t_stack *stack_b, bool print)
{
	int	i;
	int	temp;

	if (stack_b->top >= 1)
	{
		i = 0;
		temp = stack_b->array[0];
		while (i < stack_b->top)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->top] = temp;
	}
	if (print)
		ft_putstr("rrb\n");
}

void	do_rrr(t_stack *stack_a, t_stack *stack_b, bool print)
{
	int	i;
	int	temp;

	if (stack_a->top >= 1)
	{
		i = -1;
		temp = stack_a->array[0];
		while (++i < stack_a->top)
			stack_a->array[i] = stack_a->array[i + 1];
		stack_a->array[stack_a->top] = temp;
	}
	if (stack_b->top >= 1)
	{
		i = -1;
		temp = stack_b->array[0];
		while (++i < stack_b->top)
			stack_b->array[i] = stack_b->array[i + 1];
		stack_b->array[stack_b->top] = temp;
	}
	if (print)
		ft_putstr("rrr\n");
}
