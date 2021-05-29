#include<stdio.h>
#include "NameCard.h"
#include <stdlib.h>


char* f_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] !=  '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int f_strcomp(char *str1, char *str2)
{
	int i;
	i = 0;
	while(str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
		return  0;
}

NameCard *MakeNameCard(char *name, char *phone)
{
	NameCard *Ncard = (NameCard*)malloc(sizeof(NameCard));
	f_strcpy(Ncard->name, name);
	f_strcpy(Ncard->phone, phone);
	return Ncard;
}

void ShowNameCardInfo(NameCard *pcard)
{
	printf("name : %s\n",pcard->name);
	printf("phone : %s\n",pcard->phone);
}

int NameCompare(NameCard *pcard, char *name)
{
	int ret;
	ret = f_strcomp(pcard->name, name);
	return ret;
}

void ChangePhoneNum(NameCard *pcard, char *phone)
{
	f_strcpy(pcard->phone, phone);
}
