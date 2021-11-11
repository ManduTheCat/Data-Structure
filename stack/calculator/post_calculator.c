#include "ListBasestack.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int Process_RPNexp(char RPNexp[])
{
	ListStack stack;
	stackInit(&stack);
	int  RPNexp_len = strlen(RPNexp);
	int i = 0;
	char tok;
	for(i = 0; i < RPNexp_len; i++)
	{
		tok = RPNexp[i];
		if(isdigit(tok))
		{
			stackInsert(&stack, tok - '0');
		}
		else if(tok == '+' || tok == '/' ||tok == '*' ||tok == '-' )
		{
			char op1 = stackPop(&stack);
			char op2 = stackPop(&stack);
			if(tok == '+')
			{
				stackInsert(&stack, op1+op2);
			}
			else if(tok == '-')
			{
				stackInsert(&stack, op1-op2);
			}
			else if(tok == '*')
			{
				stackInsert(&stack, op1*op2);
			}
			else if(tok == '/')
			{
				stackInsert(&stack, op1/op2);
			}
		}
	}
	return stackPop(&stack);
}
