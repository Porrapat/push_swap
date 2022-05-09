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

static int	count_negative(t_stack *stack_a)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i <= stack_a->top)
	{
		if (stack_a->array[i] < 0)
			num++;
		i++;
	}
	return (num);
}

static void	resolve_negative_value(t_stack *stack_a)
{
	int		negative_num;
	int		i;

	negative_num = count_negative(stack_a);
	i = 0;
	while (i < negative_num)
	{
		do_rra(stack_a, 1);
		i++;
	}
}

int	count_bits(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n >>= 1;
	}
	return count;
}

bool	is_sorted(t_stack *stack_a)
{
	int	i;

	i = -1;
	while (++i < stack_a->top)
	{
		if (stack_a->array[i + 1] > stack_a->array[i])
			return (false);
	}
	return (true);
}

void	free_stack(t_stack *stack)
{
	free(stack->array);
	free(stack);
}

int	resolve_max_bits(t_stack *stack_a)
{
	int max_bits;
	int i;
	int current_bit;

	i = stack_a->top;
	while (i >= 0)
	{
		current_bit = count_bits(stack_a->array[i]);
		if (current_bit > max_bits)
			max_bits = current_bit;
		i--;
	}
	return (max_bits);
}

void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	i = 0;
	max_bits = 31;
	// max_bits = resolve_max_bits(stack_a);
	size = stack_a->top + 1;
	while (i < max_bits)
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
	resolve_negative_value(stack_a);
}
