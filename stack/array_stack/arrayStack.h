#ifndef __array_stack__
#define __array_stack__

#define LEN_ARRAY 20
typedef int DATA;

typedef struct __stack
{
	int stack_arry[LEN_ARRAY];
	DATA stack_top_index;
}stack;

void stack_init(stack *pstack);
int stack_isempty(stack *pstack);


void stack_push(stack *pstack, DATA pdata);
DATA stack_pop(stack *pstack);
DATA stack_peek(stack *pstack);

#endif
