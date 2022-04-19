/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_sa(struct Stack *stack_a)
{
	int temp;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[stack_a->top];
		stack_a->array[stack_a->top] = stack_a->array[stack_a->top - 1];
		stack_a->array[stack_a->top - 1] = temp;
	}
	ft_putstr("do_sa\n");
}

void do_sb(struct Stack *stack_b)
{
	int temp;
	if(stack_b->top > 1)
	{
		temp = stack_b->array[stack_b->top];
		stack_b->array[stack_b->top] = stack_b->array[stack_b->top - 1];
		stack_b->array[stack_b->top - 1] = temp;
	}
	ft_putstr("do_sb\n");
}

void do_ss(struct Stack *stack_a, struct Stack *stack_b)
{
	int temp;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[stack_a->top];
		stack_a->array[stack_a->top] = stack_a->array[stack_a->top - 1];
		stack_a->array[stack_a->top - 1] = temp;
	}
	if(stack_b->top > 1)
	{
		temp = stack_b->array[stack_b->top];
		stack_b->array[stack_b->top] = stack_b->array[stack_b->top - 1];
		stack_b->array[stack_b->top - 1] = temp;
	}
	ft_putstr("do_ss\n");
}

void do_pa(struct Stack *stack_a, struct Stack *stack_b)
{
	if(!isEmpty(stack_b))
	{
		push(stack_a, pop(stack_b));
	}
	ft_putstr("do_pa\n");
}

void do_pb(struct Stack *stack_a, struct Stack *stack_b)
{
	if(!isEmpty(stack_a))
	{
		push(stack_b, pop(stack_a));
	}
	ft_putstr("do_pb\n");
}

void do_ra(struct Stack *stack_a)
{
	int temp;
	int i;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[stack_a->top];
		i = stack_a->top;
		while(i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = temp;
	}
	ft_putstr("do_ra\n");
}

void do_rb(struct Stack *stack_b)
{
	int temp;
	int i;
	if(stack_b->top > 1)
	{
		temp = stack_b->array[stack_b->top];
		i = stack_b->top;
		while(i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = temp;
	}
	ft_putstr("do_rb\n");
}

void do_rr(struct Stack *stack_a, struct Stack *stack_b)
{
	int temp;
	int i;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[stack_a->top];
		i = stack_a->top;
		while(i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = temp;
	}
	if(stack_b->top > 1)
	{
		temp = stack_b->array[stack_b->top];
		i = stack_b->top;
		while(i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = temp;
	}
	ft_putstr("do_rr\n");
}

void do_rra(struct Stack *stack_a)
{
	int temp;
	int i;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[0];
		i = 0;
		while(i < stack_a->top)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->top] = temp;
	}
	ft_putstr("do_rra\n");
}

void do_rrb(struct Stack *stack_b)
{
	int temp;
	int i;
	if(stack_b->top > 1)
	{
		temp = stack_b->array[0];
		i = 0;
		while(i < stack_b->top)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->top] = temp;
	}
	ft_putstr("do_rrb\n");
}

void do_rrr(struct Stack *stack_a, struct Stack *stack_b)
{
	int temp;
	int i;
	if(stack_a->top > 1)
	{
		temp = stack_a->array[0];
		i = 0;
		while(i < stack_a->top)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->top] = temp;
	}
	if(stack_b->top > 1)
	{
		temp = stack_b->array[0];
		i = 0;
		while(i < stack_b->top)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->top] = temp;
	}
	ft_putstr("do_rrr\n");
}

