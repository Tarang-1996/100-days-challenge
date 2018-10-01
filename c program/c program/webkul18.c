#include<stdio.h>
void main(){
	int i,j,k,l;
	for(i=1;i<=5;i++){
k=i-1;
l=i;
		for(j=1;j<=5;j++){
			if(l<=5)
			{
				printf("%d",l++);
			}
			else{
				printf("%d",k--);
			}
		}
	printf("\n");
	}
}
