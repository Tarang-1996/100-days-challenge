#include<stdio.h>
void main()
{
	int i,j,count=0,alpha=65,alphabet=65;
	
	
for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %d ",count++);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c ",alpha++);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c ",alphabet);
		}
		printf("\n");
		alphabet++;
	}
		for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==2 && j==2)
			 continue;
			else
			printf(" * ");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
}
