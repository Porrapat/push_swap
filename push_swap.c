#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putstr(char *s)
{
	ft_putstr_fd(s, 1);
}


// A structure to represent a stack
struct Stack {
    int top;
    unsigned int capacity;
    int *array;
};

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

// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 

 
// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned int capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
 
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
 
// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
 
// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
 
// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
 
// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}
 

int main()
{
    struct Stack* stack_a = createStack(100);
    struct Stack* stack_b = createStack(100);
 
    push(stack_a, 10);
    push(stack_a, 20);
    push(stack_a, 30);
 
    printf("%d popped from stack\n", pop(stack_a));
 
	push(stack_a, 40);

	do_sa(stack_a);
	do_sa(stack_a);
	do_sa(stack_a);

	printf("%d popped from stack\n", pop(stack_a));
	printf("%d popped from stack\n", pop(stack_a));

	free(stack_a->array);
	free(stack_a);

	free(stack_b->array);
	free(stack_b);

    return 0;
}

// Driver program to test above functions
// int main()
// {
//     struct Stack* stack = createStack(100);
 
//     push(stack, 10);
//     push(stack, 20);
//     push(stack, 30);
 
//     printf("%d popped from stack\n", pop(stack));
 
// 	free(stack->array);
// 	free(stack);
//     return 0;
// }

// int main()
// {
// 	// int a[5000];
// 	// int b[5000];


// 	write(1, "\n", 1);
// }