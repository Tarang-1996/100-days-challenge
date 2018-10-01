#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
	   k=1;
	   while(k!=(2*i)+1){
	   	printf("%d",k);
	   	k++;
	   }
	   printf("\n");
	}
}
