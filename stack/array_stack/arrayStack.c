#include <stdio.h>
#include "arrayStack.h"
#include <stdlib.h>

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
	(pstack->stack_top_index)++;
	pstack->stack_arry[pstack->stack_top_index] = pdata;
}

 DATA stack_pop(stack *pstack)
 {
	if(stack_isempty(pstack) ==  1)
	{
		printf("stack ie empty ");
		exit(-1);
	}
	DATA temp;
	temp = pstack->stack_arry[pstack->stack_top_index];
	(pstack->stack_top_index)--;

<<<<<<< HEAD
	return temp;
 }

 DATA stack_peek(stack *pstack)
 {
	 if(stack_isempty(pstack) == 0)
	 {
		printf("stack is empty");
		exit(-1);
	 }
	 return (pstack->stack_arry[pstack->stack_top_index]);
 }
=======
}

DATA stack_pop(stack *pstack)
{
	DATA temp;

	temp = pstack->stack_arry[pstack->stack_top_index];
	(pstack->stack_top_index)--;
	return temp; 
}

DATA stack_peek(stack *pstack)
{
	DATA temp;

	temp = pstack->stack_arry[pstack->stack_top_index];
	return temp;
}
>>>>>>> 5672bc73dfeea95075d09291c2ddea8fa210b0e6
