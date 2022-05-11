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

void input_push_swap(int argc, char **argv, t_stack *stack_a)
{
	int		i;

	i = argc;
	while (i > 1)
	{
		if (ft_is_number(argv[i - 1])) 
			push(stack_a, atoi(argv[i - 1]));
		else
		{
			printf("Error\n");
			exit (0);
		}
		i--;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		stack_a = create_stack(argc - 1);
		input_push_swap(argc, argv, stack_a);
		stack_b = create_stack(stack_a->capacity);
		// push_swap_radix_sort(stack_a, stack_b);
		push_swap_normal_sort(stack_a, stack_b);
		// print_stack(stack_a);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}
