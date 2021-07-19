#include<stdio.h>
#include"DBLinkedList.h"

int main()
{
	List list;
	int	data;
	ListInit(&list);

	ListInsert(&list,1);
	ListInsert(&list,2);
	ListInsert(&list,3);
	ListInsert(&list,4);
	ListInsert(&list,5);
	ListInsert(&list,6);
	ListInsert(&list,8);
	ListInsert(&list,9);
	ListInsert(&list,10);

	if(ListFirst(&list, &data))
	{
		printf("%d ", data);
		while(ListNext(&list, &data))
		{
			printf("%d ",data);
		}
	}

}