#include "infix_to_postfix.h"
#include "ListBasestack.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int Get_op_info(char op)
{
	if(op == '*' || op == '/')
		return 5;
	else if(op == '+' || op == '-')
		return 3;
	else if(op == '(')
		return 1;
	return -1;
}

int Op_comp(char op1, char op2)
{
	int op_infor_1 = Get_op_info(op1);
	int op_infor_2 = Get_op_info(op2);

	if( op_infor_1 > op_infor_2)
	{
		return 1;
	}
	else if(op_infor_1 < op_infor_2)
	{
		return -1;
	}
	return 0;
}

void Conv_to_RPNexp(char exp[])
{
	ListStack s;
	int exp_len = strlen(exp);
	char *RPNexp = (char*)malloc(sizeof(exp_len + 1));
	memset(RPNexp, 0, sizeof(char) * exp_len + 1);
	int i = 0;
	int idx = 0;
	char token;
	char pop;

	stackInit(&s);
	for(i = 0; i < exp_len; i++)
	{
		token = exp[i];
		if(isdigit(token))
		{
			RPNexp[idx++] = token;
		}
		else
		{
			if(token == '(')
			{
				stackInsert(&s, token);
			}
			else if(token == ')')
			{
				while(1)
				{
					pop = stackPop(&s);
					// printf("pop = %c\n", pop);
					if(pop == '(')
						break;
					else
						RPNexp[idx++] = pop;
					// printf("%s\n", RPNexp);
				}
			}
			else if(token == '+' || token == '-' || token == '/' || token == '*')
			{
				while(stackIsEmty(&s) && Op_comp(stackPeck(&s),token) >= 0)
				{
					// printf("in 1 \n");
					RPNexp[idx++] = stackPop(&s);
				}
				stackInsert(&s, token);
			}
		}
	}

	while(stackIsEmty(&s))
	{
		// printf("in\n");
		RPNexp[idx++] = stackPop(&s);
	}

	strcpy(exp, RPNexp);
	free(RPNexp);
}
