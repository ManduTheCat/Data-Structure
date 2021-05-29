#include<stdio.h>
#include<stdlib.h>

int main()
{
	typedef struct __node
	{
		int data;
		struct  __node *next;
	} Node;

	Node	*head;
	Node	*cur;
	Node	*newNode;
	int		input_data;

	head = NULL;
	cur = NULL;
	while(1)
	{
		printf("input number : ");
		scanf("%d", &input_data);
		if(input_data < 1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = input_data;
		newNode->next = NULL;
		if(head == NULL)
			head = newNode;
		else
		{
			newNode->next = head;
			head = newNode;
		}
	}

	cur = head;
	printf("%d\n",cur->data);
	while(cur->next != NULL)
	{
		cur = cur->next;
		printf("%d\n", cur->data);
	}

}
