#include "ArrayList.h"
#include <stdio.h>

int main(void)
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 33);
	printf("recent number of data: %d\n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("first data is : %d and flowing ", data);

		while(LNext(&list, &data))
			{
				printf("%d ",data);
			}
	}
	printf("\n\n");

	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);

		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	printf("22 is removed \n\n");

	printf("recent number of  data: %d\n",LCount(&list));

	if(LFirst(&list,&data))
		{
			printf("first data is : %d and folowing ",data);

			while(LNext(&list, &data))
			{
				printf("%d ", data);
			}
		}
	return (0);
}
