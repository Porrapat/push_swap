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

#include "push_swap.h"

static bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	ft_is_number(char *number)
{
	int	i;

	i = 0;
	if (number[0] == '-')
		i = 1;
	while (number[i] != 0)
	{
		if (!ft_is_digit(number[i]))
			return (false);
		i++;
	}
	return (true);
}
