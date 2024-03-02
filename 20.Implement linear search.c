//linear search
#include<stdio.h>
#include<conio.h>
int main()
{
	int array[100], search, c, n;
	clrscr();
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for(c=0; c<n; c++)
		scanf("%d", &array[c]);
	printf("Enter a number to search: ");
	scanf("%d", &search);
	for(c=0; c<n; c++)
	{
		if (array[c]==search)
		{
			printf("%d is present at location %d\n", search, c+1);
			break;
		}
	}
	if(c==n)
		printf("%d is not present in the array\n", search);
	getch();
	return 0;
}
