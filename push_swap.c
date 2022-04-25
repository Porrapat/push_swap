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

	int max_bits = 31;

	size = stack_a->top + 1;
	int i = 0;
	while (i < max_bits)
	{
		int j = 0;
		while(j < size)
		{
			// num = stack_a->top; // top number of A
			num = peek(stack_a);
			printf("Num is %d\n", num);
			if (((num >> i) & 1) == 1) 
				do_ra(stack_a, 1);	// if the (i + 1)-th bit is 1, leave in stack a        else pb();
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

	push(stack_a, 4);
	push(stack_a, 0);
	push(stack_a, 6);
	push(stack_a, 1);
	push(stack_a, 5);
	push(stack_a, 2);
	push(stack_a, 3);
	push(stack_a, 7);
	
	push_swap(stack_a, stack_b);

	print_stack(stack_a);
	// print_stack(stack_b);

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