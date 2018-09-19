#include<stdio.h>
void main()
{
	int i,j,count=65,k;
	

	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		k=5-i;
		while(k!=5)
		{
			printf("*");
			k++;
		}	   printf("\n");
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{    if(j<i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		k=5-i;
		while(k!=5)
		{
			printf("%d",i);
			k++;
		}	   printf("\n");
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{    if(j<i)
			printf(" ");
			else
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		k=5-i;
		while(k!=5)
		{
			printf("%d",j);
			k++;
		}	   printf("\n");
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{    if(j<i)
			printf(" ");
			else
			printf("%d",j);
		}
		printf("\n");
	}
	
}
