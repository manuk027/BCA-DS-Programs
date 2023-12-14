//singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}
*head;
void createlist(int n)
{
	struct node *newnode, *temp;
	int data, i;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of node 1:");
	scanf("%d", &data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2; i<=n; i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data of node %d:", i);
		scanf("%d", &data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
}
void traverselist()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty");
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("Data=%d\n", temp->data);
		temp=temp->next;
	}
}
void main()
{
	int n;
	clrscr();
	printf("Enter the total number of nodes:");
	scanf("%d", &n);
	createlist(n);
	printf("\nData in the list\n");
	traverselist();
	getch();
}
