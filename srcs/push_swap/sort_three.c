/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sort_three(t_stack *stack_a)
{
	int	zero;
	int	one;
	int	two;

	zero = stack_a->array[0];
	one = stack_a->array[1];
	two = stack_a->array[2];
	if (one > zero && two > one)
	{
		do_sa(stack_a, 1);
		do_rra(stack_a, 1);
	}
	else if (zero < one && zero > two)
	{
		do_sa(stack_a, 1);
		do_ra(stack_a, 1);
	}
	else if (zero > one && zero < two)
		do_ra(stack_a, 1);
	else if (zero < one && one > two)
		do_rra(stack_a, 1);
	else if (zero > one && one < two)
		do_sa(stack_a, 1);
}
