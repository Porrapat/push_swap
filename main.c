/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	if(argc < 2)
	{
		printf("No not this\n");
		return (0);
	}
	i = argc;
	printf("i is %d\n", i);
	stack_a = create_stack(i - 1);
	stack_b = create_stack(i - 1);
	while (i > 1)
	{
		push(stack_a, atoi(argv[i - 1]));
		i--;
	}
	push_swap(stack_a, stack_b);
	// printf("------ Finished ! -------\n");
	// print_stack(stack_a);
	// print_stack(stack_b);
	return (0);
}
