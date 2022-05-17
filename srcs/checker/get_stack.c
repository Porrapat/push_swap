/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

bool	atoiv(const char *str, int *n)
{
	int		signal;
	bool	overflow;

	*n = 0;
	signal = -1;
	overflow = false;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			signal = 1;
	while (*str >= '0' && *str <= '9')
	{
		*n = *n * 10 - (*str++ - '0');
		if (*n > 0 || (*n == INT_MIN && signal < 0))
			overflow = true;
	}
	*n *= signal;
	return (overflow);
}

int	fill_element(t_stack *stack, char *arg)
{
	unsigned int	j;
	int				n;
	int				status;
	char			**array;

	j = 0;
	status = 0;
	array = ft_split(arg, ' ');
	while (array[j] && !status)
	{
		if (!ft_is_number(array[j]))
			status = 1;
		if (atoiv(array[j], &n))
			status = 2;
		if (ft_already_exists(n, stack))
			status = 3;
		else
			stack->array[++stack->top] = n;
		j++;
	}
	free_array((void **)array);
	return (status);
}

t_stack	*get_stack(int size, char **args)
{
	unsigned int	i;
	int				status;
	t_stack			*stack;

	if (size < 1)
		exit(0);
	i = 0;
	status = 0;
	stack = create_stack(STACK_BUFFER);
	while (args[i] && !status)
		status = fill_element(stack, args[i++]);
	if (status)
	{
		free_stack(stack);
		ft_putendl_fd("Error", STDERR_FILENO);
		exit(status);
	}
	reverse_array(stack->array, stack->top + 1);
	return (stack);
}

void	message_and_exit(t_stack *stack, char **ops, int status)
{
	if (stack)
		free_stack(stack);
	if (ops)
		free_array((void **)ops);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(status);
}
