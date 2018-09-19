#include<stdio.h>
void main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	i=(i*j)/(j=i);   // i=i+j-(j=i);  ....................  i=i^j^(j=i);
	printf("%d%d",i,j);
}
