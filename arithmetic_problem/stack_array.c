// use array  ---> stack
//study notes
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
typedef struct _STACK
{
	/* data */
	int elements[MAXSIZE];
	int top;
}STACK;

int push(STACK *stack, int x);
int pop(STACK *stack);
int getTop(STACK *stack);

int main(void)
{
	int i;

	//define stack
	STACK stack;

	//initialize stack
	stack.top = -1;

	//push elements
	push(&stack, 32);
	push(&stack, 75);
	push(&stack, 43);

	//pop elements
	pop(&stack);

	//显示栈中元素(除栈底外的元素）及栈顶
	if (stack.top == -1)
	{
		printf("Stack is empty!\n");
	}else
	{
		i = stack.top;
		for (;i > -1; i--)
		{
			printf("stack->elements[%d] = %d\n", i , stack.elements[i]);
		}
	}
	printf("The top is %d\n", getTop(&stack));

	return 0;
}

int push(STACK *stack, int x)
{
	if ((stack->top+1) >= MAXSIZE)
	{
		printf("Stack is overflow!\n");
		return 0;
	}

	stack->top = stack->top+1;
	stack->elements[stack->top] = x;
	return 0;
}

int pop(STACK *stack)
{
	if (stack < 0)
	{
		printf("Stack is empty!\n");
		return 0;
	}
	stack->top-=1;
	return 0;
}

int getTop(STACK *stack)
{
	return(stack->elements[stack->top]);
}
