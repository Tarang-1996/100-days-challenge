#include<stdio.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=5;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
