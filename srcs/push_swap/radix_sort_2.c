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

void	reset_to_minus(t_stack *stack_a, int *temp)
{
	int	i;

	i = 0;
	while (i < (int)stack_a->capacity)
	{
		temp[i] = -1;
		i++;
	}
}

void	copy_from_temp(t_stack *stack_a, int *temp)
{
	int	i;

	i = 0;
	while (i < (int)stack_a->capacity)
	{
		stack_a->array[i] = temp[i];
		i++;
	}
}

void	main_index_number(t_stack *stack_a, int *temp)
{
	int	i;
	int	j;
	int	min;
	int	min_index;

	i = 0;
	while (i < (int)stack_a->capacity)
	{
		j = 0;
		min = INT_MAX;
		while (j <= stack_a->top)
		{
			if ((stack_a->array[j] <= min) && temp[j] == -1)
			{
				min = stack_a->array[j];
				min_index = j;
			}
			j++;
		}
		temp[min_index] = i;
		i++;
	}
}

void	index_number(t_stack *stack_a)
{
	int	*temp;

	temp = (int *)malloc(sizeof(int) * stack_a->capacity);
	reset_to_minus(stack_a, temp);
	main_index_number(stack_a, temp);
	copy_from_temp(stack_a, temp);
	free(temp);
}
