#include<stdio.h>
void main(){
	int i,j,n,k,sum=1,tl;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" %d ",sum++);
		}
		printf("\n");
	}
	for(i=0;i<=n;i++){
		tl=0;
		for(j=n;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			tl=i-k;
			printf("%d",tl--);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		tl=0;
		for(j=0;j<i;j++){
			printf(" %d ",tl++);
		}
		printf("\n");
	}
}
