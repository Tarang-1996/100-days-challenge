#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf("*");
		}
		k=5-i;
		while(k!=5)
		{
			printf(" ");
			k++;
		}	   printf("\n");
	}
}
