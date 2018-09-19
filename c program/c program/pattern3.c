#include<stdio.h>
void main()
{
	int i,j,count=97,k;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			printf(" ");
		}
		k=9-i;
		while(k!=9)
		{
			printf("*");
			k++;
		}
	   printf("\n");
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			printf(" ");
		}
		k=9-i;
		while(k!=9)
		{
			printf("%d",j);
			k++;
		}
	   printf("\n");
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			printf(" ");
		}
		k=9-i;
		while(k!=9)
		{
			printf("%d",i);
			k++;
		}
	   printf("\n");
	}
		for(i=0;i<=9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			printf(" ");
		}
		k=9-i;
		while(k!=9)
		{
			printf("%c",count++);
			k++;
		}
	   printf("\n");
	}
}
