#include<stdio.h>
void main(){
	int i,j;
	for(i=9;i>=1;i--)
	{
		for(j=i;j<=9;j++){
			printf("%d",j);
		}
		printf("0");
		for(j=9;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
}
