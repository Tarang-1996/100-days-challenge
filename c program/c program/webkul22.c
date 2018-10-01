#include<stdio.h>
void main(){
	int i,j,k;
	char n;
	for(i=5;i>=1;i--){
		n='A'-1+i;
		for(j=1;j<=i;j++){
			printf("%c",n--);
		}
		printf("\n");
	}
}
