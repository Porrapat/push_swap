/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                              :+:      :+:    :+:   */
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
	push(stack_a, 10000);
	push(stack_a, 12120);
	push(stack_a, -95442);
	push(stack_a, -7);
	push(stack_a, -8);
	push(stack_a, -9);
	push(stack_a, -90);
	push(stack_a, -80);
	push(stack_a, 1);
	push(stack_a, 2);
	push(stack_a, 0);
	push(stack_a, 70);
	push(stack_a, 990);
	push(stack_a, 890);
	push(stack_a, 790);
	push(stack_a, 991);
	push(stack_a, 892);
	push(stack_a, 793);
	push_swap(stack_a, stack_b);
	printf("------ Finished ! -------\n");
	print_stack(stack_a);
	print_stack(stack_b);
	return (0);
}
