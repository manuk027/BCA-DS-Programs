//read a sparse matrix and display its triplet representation using array
#include<stdio.h>
#include<conio.h>
void main()
{
	int A[10][10], B[10][3], m, n, i, j, s=0;
	clrscr();
	printf("Enter the order mXn of the matrix:\n");
	scanf("%d%d", &m, &n);
	printf("Enter the elements in the sparse matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("The given matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\t%d", A[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i][j]!=0)
			{
				B[s][0]=A[i][j];
				B[s][1]=i;
				B[s][2]=j;
				s++;
			}
		}
	}
	printf("\nThe triplet representation of sparse matrix is given by:");
	printf("\n");
	for(i=0; i<s; i++)
	{
		for(j=0; j<s; j++)
		{
			printf("\t%d", B[i][j]);
		}
		printf("\n");
	}
	getch();
}
