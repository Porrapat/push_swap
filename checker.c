#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
// int	main(void)
{
	int		status;
	t_stack	*stack;
	char	**instructions;

	status = 0;
	instructions = NULL;
	stack = get_stack(argc - 1, &argv[1]);
	status = get_instructions(&instructions);

	// printf("stack is %d\n", stack->array[0]);
	// printf("stack is %d\n", stack->array[1]);
	// printf("stack is %d\n", stack->array[2]);
	// printf("stack is %d\n", stack->array[3]);
	// printf("stack is %d\n", stack->array[4]);
	// printf("status is %d\n", status);
	// printf("instructions is %s\n", instructions[0]);

	if (status)
		message_and_exit(stack, instructions, status);
	execute(instructions, stack);
	free_array((void **)instructions);
	free_stack(stack);
	return (status);
}
