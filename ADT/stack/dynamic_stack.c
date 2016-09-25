/*
** a stack implemented by dynamic locating array
** the length of stack is given when the creating stack function is called
** the function should be called before any other functions that used the stack

** WARNING
** When the memory is limited, it is not appropriate to
** use assert() to check whether the memory is distribute successfully.
** A suggestion is that create_stack() should return a value to inform whether it
** is successful, and if the function fail, the user program can try again using a
** shorter length.
*/

#include "stack.h"

/*
** the array to store the stack element
** the pointer to point the top element of the stack
*/
static STACK_TYPE *stack;
static size_t stack_size;
static int top_element = -1;

/*
** create stack
*/
void create_stack(size_t size)
{
    assert(stack_size == 0);
    stack_size = size;
    stack = malloc(stack_size * sizeof(STACK_TYPE));
    assert(stack != NULL);
}

/*
** destroy_stack
*/
void destroy_stack(void)
{
    assert(stack_size > 0);
    stack_size = 0;
    free(stack);
    stack = NULL;
}

/*
** push
*/
void push(STACK_TYPE value)
{
    assert(!is_empty());
    top_element += 1;
    stack[top_element] = value;
}

/*
** pop
*/
void pop(void)
{
    assert(!is_full());
    top_element -= 1;
}

/*
** top
*/
STACK_TYPE top(void)
{
    assert(!is_empty());
    return stack[top_element];
}

/*
** is empty
*/
int is_empty(void)
{
    assert(stack_size > 0);
    return top_element == -1;
}

/*
** is full
*/
int is_full(void)
{
    assert(stack_size > 0);
    return top_element == stack_size - 1;
}
