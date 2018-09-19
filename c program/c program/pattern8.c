#include<stdio.h>
void main()
{
	int i,j,count=0,k;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9-i;j++)
		{
			printf(" ");
		}
		k=0;
		while(k!=2*i-1)
		{
			printf("*");
			k++;
		}
	   printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3-i;j++)
		{
			printf(" ");
		}
		k=0;
		while(k!=2*i-1)
		{
			printf("%d",count++);
			k++;
		}
	   printf("\n");
	}
}
