#include<stdio.h>
void main(){
	int i,j,k;
	for(i=0;i<=9;i++)
	{
			for(j=0;j<=i;j++)
			{
				printf("*");
			}printf("\n");
		for(j=0;j<=9-i;j++)
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
	
	
	
	
	
}
