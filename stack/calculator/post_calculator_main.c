#include <stdio.h>
#include "post_calculator.h"
#include "infix_to_postfix.h"

int main()
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";
	char exp4[] = "123+*4/";
	char exp5[] = "24*8+";
	Conv_to_RPNexp(exp1);
	Conv_to_RPNexp(exp2);
	Conv_to_RPNexp(exp3);

	printf("%s = %d\n", exp1, Process_RPNexp(exp1));
	printf("%s = %d\n", exp2, Process_RPNexp(exp2));
	printf("%s = %d\n", exp3, Process_RPNexp(exp3));
	printf("%s = %d\n", exp4, Process_RPNexp(exp4));
	printf("%s = %d\n", exp5, Process_RPNexp(exp5));
}
