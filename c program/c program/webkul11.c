#include<stdio.h>
void main(){
	int i,j,k,num;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(k=0;k<num-i;k++){
			printf(" ");
		}
		for(j=0-i;j<=i;j++){
			printf("%d",abs(j));
		}
		printf("\n");
	}
	
	
		for(i=1;i<num;i++)
	{
		for(k=1;k<num-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
	}
	
	
	
		for(i=1;i<=num;i++)
	{
		for(k=1;k<=num-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%2d",j);
		}
		printf("\n");
	}
	
		for(i=1;i<=num;i++)
	{
		for(k=1;k<=num-i;k++){
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++){
			printf("%2d",j);
		}
		printf("\n");
	}
}
