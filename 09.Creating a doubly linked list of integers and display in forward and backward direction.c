//creating a doubly linked list of integers and display in forward and backward direction
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *head,*tail=NULL;
void addNode(int data)
{
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  if(head==NULL)
  {
    head=tail=newNode;
    head->prev=NULL;
    tail->next=NULL;
  }
  else
  {
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    tail->next=NULL;
  }
}
void display()
{
  struct node *current=head;
  if(head==NULL)
  {
    printf("\nList is empty!");
    return;
  }
  printf("\nNodes of doubly linked list :\n");
  while(current!=NULL)
  {
    printf("%d",current->data);
    current=current->next;
    printf("\t");
  }
  printf("\n");
}
void reverse()
{
  struct node *current=head,*temp;
  while(current!=NULL)
  {
    temp=current->next;
    current->next=current->prev;
    current->prev=temp;
    current=current->prev;
  }
  temp=head;
  head=tail;
  tail=temp;
  display();
}
int main()
{
  int i,num;
  clrscr();
  while(1)
  {
    printf("\nList Operations");
    printf("\n1.Insert a node.");
    printf("\n2.Display.");
    printf("\n3.Display in reverse order.");
    printf("\n4.Exit.");
    printf("\n\nEnter your choice:");
    scanf("%d",&i);
    if(i<=0) 
      printf("\nInvalid Option");
    else 
      switch(i)
      {
        case 1: 
        {
          printf("\nEnter the value to be inserted:");
          scanf("%d",&num);
          addNode(num);
          break;
        }
        case 2:
          display();
          break;
        case 3:
          printf("\nIn reverse order");
          reverse();
          break;
        case 4:
          return 0;
        default: 
          printf("\nInvalid option !");
        }  
  }
}
