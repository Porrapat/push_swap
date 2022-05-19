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
#include <stdio.h>

void	input_push_swap(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	int		n;

	i = argc;
	n = 0;
	while (i > 1)
	{
		if (ft_is_number(argv[i - 1])
			&& !atoiv(argv[i - 1], &n)
			&& !ft_already_exists(atoi(argv[i - 1]), stack_a))
			push(stack_a, atoi(argv[i - 1]));
		else
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit (0);
		}
		i--;
	}
}

void	input_push_swap_2(int num, char **temp, t_stack *stack_a)
{
	int		i;
	int		n;

	i = num - 1;
	n = 0;
	while (i >= 0)
	{
		if (ft_is_number(temp[i])
			&& !atoiv(temp[i], &n)
			&& !ft_already_exists(atoi(temp[i]), stack_a))
			push(stack_a, atoi(temp[i]));
		else
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit (0);
		}
		i--;
	}
}

void	main_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->capacity == 2)
		push_swap_sort_two(stack_a);
	else if (stack_a->capacity == 3)
		push_swap_sort_three(stack_a);
	else if (stack_a->capacity == 5)
		push_swap_sort_five(stack_a, stack_b);
	else
		push_swap_radix_sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
}

void	push_swap_input(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**temp;
	int		i;

	if (argc == 2)
	{
		i = 0;
		temp = ft_split(argv[1], ' ');
		while (temp[i] != 0)
			i++;
		stack_a = create_stack(i);
		input_push_swap_2(i, temp, stack_a);
		free_array((void **)temp);
	}
	else
	{
		stack_a = create_stack(argc - 1);
		input_push_swap(argc, argv, stack_a);
	}
	stack_b = create_stack(stack_a->capacity);
	main_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else
		push_swap_input(argc, argv);
	return (0);
}
