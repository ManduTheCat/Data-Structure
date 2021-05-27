#include <stdlib.h>
#include <stdio.h>
#include "ArrayList.h"
#include  "NameCard.h"

void ft_find_remove(List *list, NameCard *dataCard, char *target)
{
	if(LFirst(list,&dataCard))
	{
		if(!(NameCompare(dataCard, target)))
			LRemove(list);
		while(LNext(list,&dataCard))
		{
			if(!(NameCompare(dataCard, target)))
			{
				LRemove(list);
				break;
				free(list);
			}
		}
	}
}

void ft_change_phone(List list, NameCard *dataCard, char *target, char* phone)
{
	if(LFirst(&list,&dataCard))
	{
		if(!(NameCompare(dataCard, target)))
			ChangePhoneNum(dataCard, phone);
		while(LNext(&list,&dataCard))
		{
			if(!(NameCompare(dataCard, target)))
			{
				ChangePhoneNum(dataCard, phone);
				break;
			}
		}
	}
}

void ft_find_name(List list, NameCard *dataCard, char *target)
{
	if(LFirst(&list,&dataCard))
	{
		if(!(NameCompare(dataCard, target)))
			ShowNameCardInfo(dataCard);
		while(LNext(&list,&dataCard))
		{
			if(!(NameCompare(dataCard, target)))
			{
				ShowNameCardInfo(dataCard);
				break;
			}
		}
	}
}
int main()
{
	List list;
	NameCard *dataCard;

	ListInit(&list);
	dataCard = MakeNameCard("와나나", "010-8765-5858");
	LInsert(&list, dataCard);
	dataCard = MakeNameCard("김도", "010-1234-5678");
	LInsert(&list, dataCard);
	dataCard = MakeNameCard("풍월량","010-4321-7891");
	LInsert(&list, dataCard);

	if(LFirst(&list, &dataCard))
	{
		ShowNameCardInfo(dataCard);
		while(LNext(&list, &dataCard))
		{
			ShowNameCardInfo(dataCard);
		}
	}

	printf("------ft-----\n");
	ft_find_name(list,dataCard, "김도");
	ft_change_phone(list,dataCard,"김도","010-1234-5555");
	ft_find_remove(&list,dataCard,"풍월량");
	printf("------ft-----\n");

	if(LFirst(&list, &dataCard))
	{
		ShowNameCardInfo(dataCard);
		while(LNext(&list, &dataCard))
		{
			ShowNameCardInfo(dataCard);
		}
	}

}
