#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			if(i==1&&j==1)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		k=5-i;
		while(k!=5)
		{
			if(i==1)
			{
				printf(" ");
				k++;
			}
			else{
			
			printf("*");
			k++;}
		}
	   printf("\n");
	}
}
