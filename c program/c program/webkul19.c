#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c",'A'+5-j);
			
		}
		printf("\n");
	}
}
