/*
** an interface of queue module
*/

#include <stdlib.h>

/* the type of queue element */
#define QUEUE_TYPE int

/*
** create_queue
** to create a queue, whose argument defines the maximum length of the queue
** Notice: this function is used for queue implemented by dynamic-distributed array
*/

void create_queue(size_t size);

/*
** destroy_queue
** for linking and dynamic-distributed array
*/
void destroy_queue(void);

void insert(QUEUE_TYPE value);

/*
** to remove an element from the queue and discard it
*/
void delete(void);

/*
** first
** return the first element in the queue without modifying the queue
*/
QUEUE_TYPE first(void);

/*
** is_empty
*/
int is_empty(void);

/*
** is_full
*/
int is_full(void);
