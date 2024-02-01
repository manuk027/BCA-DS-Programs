//stack using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
  int val;
  struct node *next;
};
struct node *head;
void main()
{
  int choice=0;
  clrscr();
  printf("\n**Stack Using Linked List**");
  while(choice!=4)
  {
    printf("\n\nChoose an option:");
    printf("\n1.Push.\n2.Pop.\n3.Show.\n4.Exit.");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        push();
        break;
      case 2: 
        pop();
        break;
      case 3: 
        display();
        break;
      case 4:
        exit(0);
      default:
        printf("\nPlease enter valid choice..");
    }
  }
}
void push()
{
  int val;
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
    printf("\nNot able to push the element.");
  }
  else
  {
    printf("\nEnter the value: ");
    scanf("%d",&val);
    if(head==NULL)
    {
      ptr->val=val;
      ptr->next=NULL;
      head=ptr;
    }
    else
    {
      ptr->val=val;
      ptr->next=head;
      head=ptr;
    }
    printf("\nItem Pushed!!");
  }
}
void pop()
{
  int item;
  struct node *ptr;
  if(head==NULL)
  {
    printf("\nStack Underflow !!");
  }
  else
  {
    item=head->val;
    ptr=head;
    head=head->next;
    free(ptr);
    printf("\nItem Popped.");
  }
}
void display()
{
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
  {
    printf("\nStack is empty..");
  }
  else
  {
    printf("\nPrinting stack element:\n");
    while(ptr!=NULL)
    {
      printf("%d\n",ptr->val);
      ptr=ptr->next;
    }
  }
}
