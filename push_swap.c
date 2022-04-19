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

int	main(void)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = create_stack(100);
	stack_b = create_stack(100);
	push(stack_a, 10);
	push(stack_a, 20);
	push(stack_a, 30);
	printf("%d popped from stack\n", pop(stack_a));
	push(stack_a, 40);
	do_sa(stack_a);
	do_sa(stack_a);
	do_sa(stack_a);
	printf("%d popped from stack\n", pop(stack_a));
	printf("%d popped from stack\n", pop(stack_a));
	free(stack_a->array);
	free(stack_a);
	free(stack_b->array);
	free(stack_b);
	return (0);
}
