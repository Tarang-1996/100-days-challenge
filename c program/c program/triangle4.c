#include<stdio.h>
void main(){
	int i,j,k,l;
	for(i=1;i<=10;i++)
	{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
		for(l=j;l<=9-i;l++)
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
