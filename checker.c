#include <unistd.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
	// int fd;
	// char *abc;

	// fd = open("test.txt", O_RDONLY);
	// abc = get_next_line(0);

	// printf("%s", abc);
	// write(1, abc, ft_strlen(abc));

	t_stack	*stack_a;
	// t_stack	*stack_b;
	int		i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		i = argc;
		stack_a = create_stack(i - 1);
		// stack_b = create_stack(i - 1);
		while (i > 1)
		{
			if (ft_is_number(argv[i - 1])) 
				push(stack_a, atoi(argv[i - 1]));
			else
			{
				printf("Error\n");
				return (0);
			}
			i--;
		}
	}
}