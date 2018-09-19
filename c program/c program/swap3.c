#include<stdio.h>
void swap(int *x, int *y)
{
	*x= *x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

void main()
{
	int i,j;
	scanf("%d%d",&i,&j);
  swap(&i,&j);
	printf("%d%d",i,j);
	
	
	
}
