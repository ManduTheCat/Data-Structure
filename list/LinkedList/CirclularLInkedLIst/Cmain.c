#include <stdio.h>
#include "Clist.h"

int main()
{
	CList list;
	int data;
	int i;
	// int nodnum;

	i = 0;
	ListInit(&list);
	LInsert(&list,1);
	LInsert(&list,2);
	printf("data is :");
	if (LFirst(&list, &data))
	{
		printf("[");
		printf("%d  ",data);
		while (i < LCount(&list)- 1)
		{
			if(LNext(&list,&data))
			{
				printf("%d",data);
			}
			i ++;
		}
		printf("]");
	}

}
