/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:54:59 by aroque            #+#    #+#             */
/*   Updated: 2021/05/19 15:50:36 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	swap_stacks(char *op, t_stack *a, t_stack *b)
{
	if (ft_streq(op, "sa") || ft_streq(op, "ss"))
		do_sa(a, 0);
	if (ft_streq(op, "sb") || ft_streq(op, "ss"))
		do_sb(b, 0);
}

static void	push_stacks(char *op, t_stack *a, t_stack *b)
{
	if (ft_streq(op, "pa"))
		do_pa(a, b, 0);
	else if (ft_streq(op, "pb"))
		do_pb(a, b, 0);
}

static void	rotate_stacks(char *op, t_stack *a, t_stack *b)
{
	if (ft_streq(op, "ra") || ft_streq(op, "rr"))
		do_ra(a, 0);
	if (ft_streq(op, "rb") || ft_streq(op, "rr"))
		do_rb(b, 0);
	if (ft_streq(op, "rra") || ft_streq(op, "rrr"))
		do_rra(a, 0);
	if (ft_streq(op, "rrb") || ft_streq(op, "rrr"))
		do_rrb(b, 0);
}

int	execute(char **instructions, t_stack *a)
{
	t_stack	*b;

	b = create_stack(a->capacity);
	while (*instructions)
	{
		if (*instructions[0] == 's')
			swap_stacks(*instructions, a, b);
		else if (*instructions[0] == 'p')
			push_stacks(*instructions, a, b);
		else
			rotate_stacks(*instructions, a, b);
		instructions++;
	}
	if (!is_sorted(a) || b->top > -1)
		ft_putstr_fd("KO\n", STDOUT_FILENO);
	else
		ft_putstr_fd("OK\n", STDOUT_FILENO);
	free_stack(b);
	return (0);
}
