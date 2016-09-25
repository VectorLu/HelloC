/*
** use an static array to implement a stack,
** the length of the array can only
** be modified by #define
** before you compile the module again
*/

#include "stack.h"

#define STACK_SIZE 100

static STACK_TYPE stack[STACK_SIZE];
static int top_element = -1;

/*
** push
*/
void push(STACK_TYPE value)
{
    assert(!if_full());
    top_element += 1;
    stack[top_element] = value;
}

/*
** pop
*/
void pop(void)
{
    assert(!if_empty());
    top_element -= 1;
}

/*
** top
*/
STACK_TYPE top(void)
{
    assert(!if_empty());
    return stack[top_element];
}

/*
** is_empty
*/
int is_empty(void)
{
    return top_element == -1;
}

/*
** is_full
*/
int is_full(void)
{
    return top_element == STACK_SIZE - 1;
}
