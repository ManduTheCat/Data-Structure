#include <stdio.h>
#include "infix_to_postfix.h"

int main()
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";
	Conv_to_RPNexp(exp1);
	Conv_to_RPNexp(exp2);
	Conv_to_RPNexp(exp3);
	printf("%s\n", exp1);
	printf("%s\n", exp2);
	printf("%s\n", exp3);
}
