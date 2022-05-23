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

# include "shared.h"

# define INSTRUCTIONS_BUFFER_SIZE 4096

int					execute(char **instructions, t_stack *a);
t_stack				*get_stack(int size, char **args);
void				message_and_exit(t_stack *stack, char **ops, int status);
int					fill_element(t_stack *stack, char *arg);
void				reverse_array(int *array, size_t size);
int					get_instructions(char ***instructions);

#endif
