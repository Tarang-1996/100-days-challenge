#include<stdio.h>
void main(){
	int i,j,k,n,p,r;
	for(i=1;i<9;i++)
	{
		for(j=1;j<9-i;j++)
		{
			printf(" ");
		}
		k=9-i;
		n=k;
		r=0;
		while(k!=9)
		{ 
		   
		    if(k==n+r){
			
			printf("1");
			r=r+2;
		}
			else
			printf("*");
			k++;
		}printf("\n");
	}
	for(i=2;i<9;i++)
	{
	   n=i;
		r=0;
		for(j=1;j<9;j++)
		{
			if(j<i)
			{
				printf(" ");
			}
			else
			{
				
				if(j==n+r)
				{
				printf("1");
				r=r+2;
			   }
			   else
			   printf("*");
			}
		}
		printf("\n");
	}
}
