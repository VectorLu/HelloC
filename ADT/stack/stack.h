/*
** stack.h
** an interface of a stack module
*/

/* define the type that the stack can save
** the type can be modified to satify the requirement
*/
#define STACK_TYPE int

/*
** push function
** push a new value in the stack
*/
void push(STACK_TYPE value);

/*
** pop function
** to pop up a value, and discard it
*/
void pop(void);

/*
** top function
** return the top value of the stack without edit the stack
*/
STACK_TYPE top(void);

/*
** is_empty function
** judge whether the stack is empty
** if the stack is empty, return TRUE, or return FALSE
*/
int is_empty(void);

/*
** is_full function
** if the stack is full, return TRUE, or return FALSE
*/
int is_full(void);

/*
** create_stack
** create a stack, the argument define how many elements
** the stack can save
** !NOTICE: This function isn't used in array_stack.c
*/
void create_stack(size_t size);

/*
** destroy the stack,  release the memory that the stack uses
** !NOTICE: This function isn't used in array_stack.c
*/
void destroy_stack(void);
