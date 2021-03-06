/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utility_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

bool	ft_is_number(char *number)
{
	int	i;

	i = 0;
	if (number[0] == '-' && number[1] == '\0')
		return (false);
	if (number[0] == '-')
		i = 1;
	while (number[i] != 0)
	{
		if (!ft_isdigit(number[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	ft_already_exists(int n, t_stack *stack_a)
{
	int	i;

	i = stack_a->top;
	while (i >= 0)
	{
		if (stack_a->array[i] == n)
			return (true);
		i--;
	}
	return (false);
}

bool	ft_streq(const char *s1, const char *s2)
{
	return (!(ft_strncmp(s1, s2, ft_strlen(s2) + 1)));
}

bool	is_sorted(t_stack *stack_a)
{
	int	i;

	i = -1;
	while (++i < stack_a->top)
	{
		if (stack_a->array[i + 1] > stack_a->array[i])
			return (false);
	}
	return (true);
}

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
