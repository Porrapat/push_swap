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

static void	push_out_of_stack(t_stack *stack_a, t_stack *stack_b)
{
	while (!is_empty(stack_b))
		do_pa(stack_a, stack_b, 1);
}

static void	radix_comparison(t_stack *stack_a, t_stack *stack_b, int i)
{
	int	num;

	num = peek(stack_a);
	if (((num >> i) & 1) == 1)
		do_ra(stack_a, 1);
	else
		do_pb(stack_a, stack_b, 1);
}

void	push_swap_radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	i = 0;
	index_number(stack_a);
	max_bits = resolve_max_bits(stack_a);
	size = stack_a->top + 1;
	while (i < max_bits && !is_sorted(stack_a))
	{
		j = 0;
		while (j < size)
		{
			radix_comparison(stack_a, stack_b, i);
			j++;
		}
		push_out_of_stack(stack_a, stack_b);
		i++;
	}
}
