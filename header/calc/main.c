#include "calc.h"
#include "print.h"

int main(void)
{
	CALC_DATA data1;
	data1.operand1 = 10;
	data1.operand2 = 20;
	
	add(&data1);
	print(&data1);

	return(0);
}
