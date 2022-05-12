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
	int count = 0;
	while (n)
	{
		count++;
		n >>= 1;
	}
	return count;
}

/*
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
*/

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

void	index_number(t_stack *stack_a)
{
	int i;
	int j;
	int min;
	int min_index;
	int *temp;

	temp = (int *)malloc(sizeof(int) * stack_a->capacity);
	j = 0;
	while(j < (int)stack_a->capacity)
	{
		temp[j] = -1;
		j++;
	}
	i = 0;
	while (i < (int)stack_a->capacity)
	{
		j = 0;
		min = INT_MAX;
		while(j <= stack_a->top)
		{
			if ((stack_a->array[j] < min) && temp[j] == -1)
			{
				min = stack_a->array[j];
				min_index = j;
			}
			j++;
		}
		temp[min_index] = i;
		i++;
	}
	// printf("temp is %d %d %d %d %d\n", temp[4], temp[3], temp[2], temp[1], temp[0]);

	i = 0;
	while(i < (int)stack_a->capacity)
	{
		stack_a->array[i] = temp[i];
		i++;
	}
	free(temp);
	// print_stack(stack_a);
	// printf("min is %d\n", min);
}