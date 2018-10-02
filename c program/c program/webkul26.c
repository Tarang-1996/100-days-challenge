#include<stdio.h>
void main(){
	int i,j,k,l=1;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
	   k=0;
	   while(k!=(2*i)+1){
	   	printf("%d",l++);
	   	k++;
	   	
	   }
	   printf("\n");
	}
}
