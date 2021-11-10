#include <stdio.h>
#include "InfixToPostfx.h"

int main()
{
	char exp1[] = "1+2*3";
	
	ConvToRPNexp(exp1);
	
	printf("%s\n",exp1);
}