/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_normal_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	less_than;

	while (!is_empty(stack_a))
	{
		do_pb(stack_a, stack_b, 1);
		less_than = peek(stack_b) < stack_b->array[stack_b->top - 1];
		while (stack_b->top > 0 && less_than)
		{
			do_sb(stack_b, 1);
			do_pa(stack_a, stack_b, 1);
		}
	}
	while (!is_empty(stack_b))
		do_pa(stack_a, stack_b, 1);
}
