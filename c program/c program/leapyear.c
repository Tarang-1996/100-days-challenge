#include<stdio.h>
void main()
{
	int yr,n;
	scanf("%d",&yr);
	if(yr%4==0)
	
	{  
	     if(yr%100==0)
	     {
	     	if(yr%400==0)
	     	{
	     		printf("yes");
			 }
			 else
			 {
			 	printf("No");
			 }
		 }
		 else{
		 	printf("yes");
		 }
		
	}
	else
			 {
			 	printf("No");
			 }
}
