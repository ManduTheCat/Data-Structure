#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "InfixToPostfx.h"
#include "ListBasestack.h"

int GetOpPrec(char op)
{
	switch(op)
	{
		case '*':
		case '/':
			return 5;
		case '+':
		case '-':
			return 4;
		case '(':
			return 1;
	}
	return -1;
}

int WhoPrecOp(char op1, char op2)
{
	int getop1;
	int getop2;

	getop1 = GetOpPrec(op1);
	getop2 = GetOpPrec(op2);

	if(getop1 > getop2)
		return	1;

	if(getop1 < getop2)
		return -1;

	return 0; 
}

void ConvToRPNexp(char exp[])
{
	ListStack stack;
	int explen;
	int i;
	int idx;
	char *convExpt;
	char tok;
	char popOp;
	
	idx = 0;
	i = 0;
	explen = strlen(exp);
	convExpt = (char *)malloc(sizeof(explen + 1));
	memset(convExpt, 0, sizeof(char)*explen + 1);
	stackInit(&stack);

	while(i < explen)
	{
		tok = exp[i];
		if(isdigit(tok))
		{
			convExpt[idx++] = tok;
		}
		else
		{
			switch(tok)
			{
				case '(':
					stackInsert(&stack, tok);
					break;
				
				case ')':
					while(1)
					{
						popOp = stackPop(&stack);
						
						if(popOp ==  '(')
							break;
						convExpt[idx++] = popOp;
					}
					break;
				case '+':
				case '-':
				case '*':
				case '/':
					while(!stackIsEmty(&stack) && WhoPrecOp(stackPeck(&stack), tok) >= 0)
					{
						convExpt[idx++] = stackPop(&stack);
					}
					stackInsert(&stack, tok);
					break;
			}
		}
		i++;
	}
	while(!stackIsEmty(&stack))
	{
		convExpt[idx++] = stackPop(&stack);
	}
	strcpy(exp, convExpt);
	free(convExpt);
}