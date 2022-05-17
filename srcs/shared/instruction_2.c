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

#include "shared.h"

void	do_ra(t_stack *stack_a, bool print)
{
	int	i;
	int	temp;

	if (stack_a->top >= 1)
	{
		i = stack_a->top;
		temp = stack_a->array[stack_a->top];
		while (i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = temp;
	}
	if (print)
		ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void	do_rb(t_stack *stack_b, bool print)
{
	int	i;
	int	temp;

	if (stack_b->top >= 1)
	{
		i = stack_b->top;
		temp = stack_b->array[stack_b->top];
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = temp;
	}
	if (print)
		ft_putstr_fd("rb\n", STDOUT_FILENO);
}

void	do_rr(t_stack *stack_a, t_stack *stack_b, bool print)
{
	int	i;
	int	temp;

	if (stack_a->top >= 1)
	{
		i = stack_a->top + 1;
		temp = stack_a->array[stack_a->top];
		while (--i > 0)
			stack_a->array[i] = stack_a->array[i - 1];
		stack_a->array[0] = temp;
	}
	if (stack_b->top >= 1)
	{
		i = stack_b->top + 1;
		temp = stack_b->array[stack_b->top];
		while (--i > 0)
			stack_b->array[i] = stack_b->array[i - 1];
		stack_b->array[0] = temp;
	}
	if (print)
		ft_putstr_fd("rr\n", STDOUT_FILENO);
}
