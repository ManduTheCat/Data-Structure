#ifndef __LB_STACK__
#define __LB_STACK__

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef	struct _node
{
	Data data;
	struct  _node *next;
}Node;

typedef struct _listStack
{
	Node *head;
}ListStack;

typedef ListStack stack;

void StackInit(stack *pstack);
void Stack_is_empty(stack *pstack);

void Stack_push(stack *pstack, Data data);
void Stack_pop(stack *pstack);
void Stack_peek(stack *pstack);


#endif
