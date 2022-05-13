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

void	input_push_swap(int argc, char **argv, t_stack *stack_a)
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

void	push_swap_input(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = create_stack(argc - 1);
	input_push_swap(argc, argv, stack_a);
	stack_b = create_stack(stack_a->capacity);
	if (stack_a->capacity == 2)
		push_swap_sort_two(stack_a);
	else if (stack_a->capacity == 3)
		push_swap_sort_three(stack_a);
	else if (stack_a->capacity == 5)
		push_swap_sort_five(stack_a, stack_b);
	else
	{
		index_number(stack_a);
		push_swap_radix_sort(stack_a, stack_b);
	}
	free_stack(stack_a);
	free_stack(stack_b);
}

int	main(int argc, char **argv)
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	else
		push_swap_input(argc, argv);
	return (0);
}
