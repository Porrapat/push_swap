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

void push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int num;
	int size;

	int max_bits = 6;

	int i = 0;
	size = stack_a->top + 1;
	while (i < max_bits)
	{
		int j = 0;
		while(j < size)
		{
			num = peek(stack_a);
			if (((num >> i) & 1) == 1) 
				do_ra(stack_a, 1);
			else
				do_pb(stack_a, stack_b, 1);
			j++;
		}
		while(!is_empty(stack_b))
		{
			do_pa(stack_a, stack_b, 1);
		}
		i++;
	}
}


int	main(void)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = create_stack(100);
	stack_b = create_stack(100);

	push(stack_a, 4);		// 100
	push(stack_a, 2);		// 010
	push(stack_a, 6);		// 110
	push(stack_a, 10);		// 1010
	push(stack_a, 13);		// 
	push(stack_a, 20);
	push(stack_a, 3);
	push(stack_a, 7);
	
	push_swap(stack_a, stack_b);

	print_stack(stack_a);
	print_stack(stack_b);

	return (0);
}

	// push(stack_a, -10);
	// push(stack_a, -20);
	// push(stack_a, -30);
	// push(stack_a, -40);
	// push(stack_a, -50);

	// push(stack_b, 60);
	// push(stack_b, 70);
	// push(stack_b, 80);
	// push(stack_b, 90);
	// push(stack_b, 100);

	// // do_rrr(stack_a, stack_b, 1);

	// do_rrr(stack_a, stack_b, 1);
	// print_stack(stack_a);
	// print_stack(stack_b);

	// printf("%d popped from stack\n", pop(stack_a));
	// push(stack_a, 40);
	// do_sa(stack_a);
	// do_sa(stack_a);
	// do_sa(stack_a);
	// printf("%d popped from stack\n", pop(stack_a));
	// printf("%d popped from stack\n", pop(stack_a));
	// free(stack_a->array);
	// free(stack_a);
	// free(stack_b->array);
	// free(stack_b);