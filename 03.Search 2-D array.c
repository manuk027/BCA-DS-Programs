//search an element in two dimensional array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, rows, coloumns, srchelement, count=0, array[100][100];
	clrscr();
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of coloumns: ");
	scanf("%d", &coloumns);
	printf("\nEnter %d elements:\n", (rows*coloumns));
	for(i=0; i<rows; i++)
	{
		for(j=0; j<coloumns; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	printf("\nEnter the elements to get the position: \n");
	scanf("%d", &srchelement);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<coloumns; j++)
		{
			if(array[i][j]==srchelement)
			{
				printf("(%d,%d)\n", i, j);
				count++;
			}
		}
	}
	if(count==0)
	printf("Not found\n");
	getch();
}
