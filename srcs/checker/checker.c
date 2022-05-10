/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	int		status;
	t_stack	*stack;
	char	**instructions;

	status = 0;
	instructions = NULL;
	stack = get_stack(argc - 1, &argv[1]);
	status = get_instructions(&instructions);
	if (status)
		message_and_exit(stack, instructions, status);
	execute(instructions, stack);
	free_array((void **)instructions);
	free_stack(stack);
	return (status);
}
