#include<stdio.h>
void main(){
	int i,j,c,k;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		for(j=c;j>=i;j--){
   printf(" ");			
		}
		for(k=0;k<i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=c-1;i++){
		for(j=0;j<=i;j++){
   printf(" ");			
		}
		for(k=c-1-i;k>=0;k--){
			printf("*");
		}
		printf("\n");
	}
	
}
