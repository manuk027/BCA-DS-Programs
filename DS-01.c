//reverse of a string using pointers
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l, i;
	char str[100], *begin_ptr, *end_ptr, ch;
	clrscr();
	printf("Enter a string:\n");
	scanf("%s", str);
	l=strlen(str);
	begin_ptr=str;
	end_ptr=str;
	for(i=0; i<l-1; i++)
	{
		end_ptr++;
	}
	for(i=0; i<l/2; i++)
	{
		ch=*end_ptr;
		*end_ptr=*begin_ptr;
		*begin_ptr=ch;
		begin_ptr++;
		end_ptr--;
	}
	printf("Reverse of the string: %s\n", str);
	getch();
}
