#include<stdlib.h>
#include<stdio.h>

typedef struct __node
	{
		int	data;
		struct __node *next;
	} Node;

int	main()
{
	int	inputData;
	Node *newNode;
	Node *dummyNode;
	Node *head;
	Node *tail;
	Node *cur;
	// Node *befor;

	newNode = NULL;
	head = NULL;
	dummyNode = (Node*)malloc(sizeof(Node));
	tail = dummyNode;
	head = dummyNode;
	while(1)
	{
		printf("input data: ");
		scanf("%d",&inputData);

		if(inputData < 1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = inputData;
		newNode->next = NULL;

		// dummyNode->next = newNode;
		tail->next = newNode;
		tail = newNode;
	}
	printf("\n");

	if(head == NULL)
		printf("no number");

	cur = head;
	while(cur->next != NULL)
	{
		printf("%d",cur->data);
		cur = cur->next;
	}
}
