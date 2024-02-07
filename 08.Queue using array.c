//queue using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 5
void main()
{
	int queue[n], ch=1, front=0, rear=0, i, j=0, x=n;
	clrscr();
	printf("\nQueue using Array");
	printf("\n1.Insertion.\n2.Deletion.\n3.Display.\n4.Exit.");
	while(ch)
	{
		printf("\nEnter your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			{
				if(rear==x)
					printf("\nQueue is full.");
				else
				{
					printf("\nEnter no %d: ", j++);
					scanf("%d", &queue[rear++]);
				}
				break;
			}
			case 2:
			{
				if(front==rear)
					printf("\nQueue is empty.");
				else
				{
					printf("\nDeleted elements is %d", queue[front++]);
					x++;
				}
				break;
			}
			case 3:
			{
				printf("\nQueue elements are:\n");
				if(front==rear)
					printf("\nQueue is empty.");
				else
				{
					for(i=front; i<rear; i++)
					{
						printf("%d", queue[i]);
						printf("\n");
					}
				}
				break;
			}
			case 4:
				exit(0);
			default:
				printf("\nWrong Choice.Please see the options.");
		}
	}
	getch();
}
