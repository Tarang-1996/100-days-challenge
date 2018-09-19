#include<stdio.h>
void main()
{
	int i,j,count=0,alpha=65;
	for(i=0;i<=6;i++)
	{
		for(j=6-i;j>=0;j--)
		{
			printf(" * ");
		}
       printf("\n");
	}
	for(i=0;i<=6;i++)
	{
		for(j=6-i;j>=0;j--)
		{
			printf(" %d ",j);
		}
       printf("\n");
	}
	for(i=0;i<=6;i++)
	{
		for(j=6-i;j>=0;j--)
		{
			printf(" %d ",i);
		}
       printf("\n");
	}
   for(i=0;i<=6;i++)
	{
		for(j=6-i;j>=0;j--)
		{
			printf(" %d ",count++);
		}
       printf("\n");
	}
  
	
		for(j=6;j>=0;j--)
		{
			 for(i=0;i<=j;i++){
			 
			printf(" %d ",i);
		}
       printf("\n");
	}


}
