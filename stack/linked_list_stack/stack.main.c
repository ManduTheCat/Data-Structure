#include "List_based_stack.h"
#include <stdio.h>

int main()
{
	ListStack stack;
	StackInit(&stack);
	printf("is empty :%d\n",Stack_is_empty(&stack));
	Stack_push(&stack, 1);
	Stack_push(&stack, 2);
	Stack_push(&stack, 2);
	Stack_pop(&stack);
	printf("stack peck :%d\n", Stack_peek(&stack));
	printf("is empty :%d\n", Stack_is_empty(&stack));
}
