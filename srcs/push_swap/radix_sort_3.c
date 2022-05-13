/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bits(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n >>= 1;
	}
	return (count);
}

int	resolve_max_bits(t_stack *stack_a)
{
	int	max_bits;
	int	i;
	int	current_bit;

	i = stack_a->top;
	max_bits = 0;
	while (i >= 0)
	{
		current_bit = count_bits(stack_a->array[i]);
		if (current_bit > max_bits)
			max_bits = current_bit;
		i--;
	}
	return (max_bits);
}
