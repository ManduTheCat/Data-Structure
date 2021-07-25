#include "arrayStack.h"

void stack_init(stack *pstack)
{
	pstack->stack_top_index = -1;

}

int stack_isempty(stack *pstack)
{
	if(pstack->stack_top_index == -1)
		return 0;
	else
		return 1;
}

void stack_push(stack *pstack, DATA pdata)
{
	DATA temp = pdata;
	(pstack->stack_top_index)++;
	pstack->stack_arry[pstack->stack_top_index] = pdata;

	return temp;
}
