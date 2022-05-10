/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

void	push(t_stack *stack, int item)
{
	if (is_full(stack))
		return ;
	stack->array[++stack->top] = item;
}

int	pop(t_stack *stack)
{
	if (is_empty(stack))
		return (INT_MIN);
	return (stack->array[stack->top--]);
}

int	peek(t_stack *stack)
{
	if (is_empty(stack))
		return (INT_MIN);
	return (stack->array[stack->top]);
}

void	print_stack(t_stack *stack)
{
	int	i;

	i = stack->top;
	printf("Top is %d\n", i);
	while (i >= 0)
	{
		printf("%d\n", stack->array[i]);
		i--;
	}
	printf("-----------\n");
}
