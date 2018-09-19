#include<stdio.h>
void main()
{
	int i,j,k;
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
		}	   printf("\n");
	}
		for(i=9;i>=1;i--)
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
		}	   printf("\n");
	}
}
