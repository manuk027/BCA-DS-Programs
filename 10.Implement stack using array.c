//implement stack using array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int STACK[MAX], TOP;
void display(int stack[])
{
    int i=0;
    if(TOP==-1)
    {
        printf("Stack is empty\n");
    }
    printf("%d<--TOP", stack[TOP]);
    for(i=TOP-1; i>=0; i--)
    {
        printf("\n%d", stack[i]);
    }
    printf("\n\n");
}
void PUSH(int stack[], int item)
{
    if(TOP==MAX-1)
    {
        printf("\nStack is full can't add item\n");
    }
    TOP++;
    stack[TOP]=item;
}
void POP(int stack[])
{
    int deleteditem;
    if(TOP==-1)
    {
        printf("Stack is empty\n");
    }
    deleteditem=stack[TOP];
    TOP--;
    printf("%d Deleted Successfully\n", deleteditem);
}
void main()
{
    int ITEM=0;
    int choice=0;
    clrscr();
    TOP=-1;
    while(1)
    {
        printf("Enter choice:\n1:Display\n2:Insert(PUSH)\n3:Remove(POP)\n4:Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                display(STACK);
                break;
            case 2:
                printf("Enter item to be inserted:");
                scanf("%d", &ITEM);
                PUSH(STACK, ITEM);
                break;
            case 3:
                POP(STACK);
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice");
                break;
        }
        getch();
    }
}
