//BINARY SEARCH
#include<conio.h>
#include<stdio.h>
void main()
{
	int i, n, low, high, mid, arr[100], key;
	clrscr();
	printf("Enter total number of elements: ");
	scanf("%d", &n);
	printf("Enter %d numbers:\n ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the value to find: ");
	scanf("%d", &key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		{
			low=mid+1;
		}
		else if(arr[mid]==key)
		{
			printf("\n%d is found at location %d", key, mid+1);	
			break;
		}
		else 
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	if(low>high)
	{
		printf("\nNot found! %d isn't prsent in the list", key);
	}
	getch();
}
