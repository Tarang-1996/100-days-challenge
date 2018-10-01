#include<stdio.h>
void main(){
	int i,j,k;
	char n;
	for(i=1;i<=5;i++){
			n='A'-1+i;
		for(j=5;j>=i;j--){
		
			printf("%c",n++);
		}
		printf("\n");
	}
}
