#include "ListBasestack.h"
#include <stdio.h>

int main()
{
	ListStack stack;

	stackInit(&stack);
	stackInsert(&stack,1);
	stackInsert(&stack,2);
	stackInsert(&stack,3);
	stackInsert(&stack,4);
	stackInsert(&stack,5);
	stackInsert(&stack,6);
	stackInsert(&stack,7);
	stackInsert(&stack,8);
	stackInsert(&stack,9);
	stackInsert(&stack,10);
	stackInsert(&stack,11);
	stackInsert(&stack,12);
	stackInsert(&stack,13);
	stackInsert(&stack,14);

	printf("using peck :");
	printf("%d \n",stackPeck(&stack));
	while(stackIsEmty(&stack))
	{
		printf("%d ", stackPop(&stack));
	}
}