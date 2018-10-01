#include<stdio.h>
void main(){
	int i,j,n,k;
	scanf("%d",&n);
	for(i=n;i>=0;i--){
		for(j=0;j<=n-i;j++){
			printf(" ");
		}
		for(k=i;k>=0;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
}
