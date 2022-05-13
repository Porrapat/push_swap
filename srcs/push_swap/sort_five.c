/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_first_number(t_stack *stack_a, t_stack *stack_b)
{
	int	num;

	num = peek(stack_b);
	if (num < stack_a->array[2])
		do_pa(stack_a, stack_b, 1);
	else if (num > stack_a->array[2] && num < stack_a->array[1])
	{
		do_pa(stack_a, stack_b, 1);
		do_sa(stack_a, 1);
	}
	else if (num > stack_a->array[1] && num < stack_a->array[0])
	{
		do_ra(stack_a, 1);
		do_pa(stack_a, stack_b, 1);
		do_sa(stack_a, 1);
		do_rra(stack_a, 1);
	}
	else if (num > stack_a->array[0])
	{
		do_pa(stack_a, stack_b, 1);
		do_ra(stack_a, 1);
	}
}

static void	push_second_number(t_stack *stack_a, t_stack *stack_b)
{
	int	num;

	num = peek(stack_b);
	if (num < stack_a->array[3])
		do_pa(stack_a, stack_b, 1);
	else if (num > stack_a->array[3] && num < stack_a->array[2])
	{
		do_pa(stack_a, stack_b, 1);
		do_sa(stack_a, 1);
	}
	else if (num > stack_a->array[2] && num < stack_a->array[1])
	{
		do_ra(stack_a, 1);
		do_pa(stack_a, stack_b, 1);
		do_sa(stack_a, 1);
		do_rra(stack_a, 1);
	}
	else if (num > stack_a->array[1] && num < stack_a->array[0])
	{
		do_rra(stack_a, 1);
		do_pa(stack_a, stack_b, 1);
		do_ra(stack_a, 1);
		do_ra(stack_a, 1);
	}
	else
	{
		do_pa(stack_a, stack_b, 1);
		do_ra(stack_a, 1);
	}
}

void	push_swap_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	do_pb(stack_a, stack_b, 1);
	do_pb(stack_a, stack_b, 1);
	push_swap_sort_three(stack_a);
	push_first_number(stack_a, stack_b);
	push_second_number(stack_a, stack_b);
}
