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
	ft_putstr_fd("Top is ", 1);
	ft_putnbr_fd(i, 1);
	ft_putstr_fd("\n", 1);
	while (i >= 0)
	{
		ft_putnbr_fd(stack->array[i], 1);
		ft_putstr_fd("\n", 1);
		i--;
	}
	ft_putstr_fd("-----------\n", 1);
}
