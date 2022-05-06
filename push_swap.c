/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	num;
	int	size;
	int	max_bits;
	int	i;
	int	j;

	max_bits = 31;
	i = 0;
	size = stack_a->top + 1;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = peek(stack_a);
			if (((num >> i) & 1) == 1)
				do_ra(stack_a, 1);
			else
				do_pb(stack_a, stack_b, 1);
			j++;
		}
		while (!is_empty(stack_b))
			do_pa(stack_a, stack_b, 1);
		i++;
	}
}
