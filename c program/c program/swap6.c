#include<stdio.h>
void main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	if(i!=j){
		i=i-j;
		j=i+j;
		i=j-i;
	}
	printf("%d%d",i,j);
	
}
