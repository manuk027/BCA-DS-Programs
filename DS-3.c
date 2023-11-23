//append two array
#include<stdio.h>
#include<conio.h>
#define N 5
#define M (N*2)
void main()
{
  int a[N], b[N], c[M], i, index=0;
  clrscr();
  printf("Enter %d integer number, for first array\n", N);
  for(i=0; i<N; i++)
    scanf("%d", &a[i]);
  printf("Enter %d number, for second array\n", N);
  for(i=0; i<N; i++)
    scanf("%d", &b[i]);
  printf("\nMerging a[%d] and [%d] to form c[%d]\n", N, N, M);
  for(i=0; i<N; i++)
    c[index++]=a[i];
  for(i=0; i<N; i++)
    c[index++]=b[i];
  printf("\nElements of c[%d] is \n", M);
  for(i=0; i<M; i++)
    printf("%d\n", c[i]);
getch();
}
