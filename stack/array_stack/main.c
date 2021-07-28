#include <stdio.h>
#include "arrayStack.h"

int main()
{
	stack stack;

	stack_init(&stack);
	stack_push(&stack, 1);	
	stack_push(&stack, 2);
	stack_push(&stack, 3);
	stack_push(&stack, 4);
	stack_push(&stack, 5);
	stack_push(&stack, 6);
	stack_push(&stack, 9);

	printf("%d ", stack_peek(&stack));


	while(stack_isempty(&stack))
	{
		printf("%d ",stack_pop(&stack));
	}

	return 0;

}