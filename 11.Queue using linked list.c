//queue using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}
*rear, *front;
void dequeue()
{
	struct node *var=front;
	if(front==NULL)
		printf("\nQueue is empty");
	else
	{
		rear->next;
		front=front->next;
		free(var);
	}
}
void enqueue(int value)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	if(rear==NULL)
	{
		rear=temp;
		rear->next=NULL;
		front=rear;
	}
	else
	{
		rear->next=temp;
		rear=temp;
		rear->next=NULL;
	}
}
void display()
{
	struct node *var=front;
	if(var!=NULL)
	{
		printf("\nElements are:");
		while(var!=NULL)
		{
			printf("\t%d", var->data);
			var=var->next;
		}
		printf("\n");
	}
	else
		printf("\nQueue is empty.");
}
void main()
{
	int i=0;
	clrscr();
	front=NULL;
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\nChoose an option: ");
		scanf("%d", &i);
		switch(i)
		{
			case 1:
			{
				int value;
				printf("\nEnter a value to enqueue: ");
				scanf("%d", &value);
				enqueue(value);
				display();
				break;
			}
			case 2:
			{
				dequeue();
				display();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
				exit(0);
			default:
				printf("\nInvalid Option!");
		}
	}
}
