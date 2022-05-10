/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <ppetchda@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                              +#+#+#+#+#+     +#+           */
/*   Created: 2022/04/19 20:13:59 by ppetchda          #+#    #+#             */
/*   Updated: 2022/04/19 20:18:35 by ppetchda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "shared.h"

# define STACK_BUFFER 1024
# define INSTRUCTIONS_BUFFER_SIZE 4096

bool				ft_is_number(char *number);
bool				ft_streq(const char *s1, const char *s2);
bool				is_sorted(t_stack *stack_a);
void				free_stack(t_stack *stack);
int					execute(char **instructions, t_stack *a);
t_stack				*get_stack(int size, char **args);
void				free_array(void **array);
void				message_and_exit(t_stack *stack, char **ops, int status);
int					fill_element(t_stack *stack, char *arg);
void				reverse_array(int *array, size_t size);
int					get_instructions(char ***instructions);

#endif
