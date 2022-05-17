/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "shared.h"

int			count_bits(int n);
int			resolve_max_bits(t_stack *stack_a);
void		index_number(t_stack *stack_a);

void		push_swap_sort_two(t_stack *stack_a);
void		push_swap_sort_three(t_stack *stack_a);
void		push_swap_sort_five(t_stack *stack_a, t_stack *stack_b);
void		push_swap_normal_sort(t_stack *stack_a, t_stack *stack_b);
void		push_swap_radix_sort(t_stack *stack_a, t_stack *stack_b);

#endif
