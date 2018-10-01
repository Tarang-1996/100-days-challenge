#include<stdio.h>
int fib(int x);
void main(){
	int i,j,k=1;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++){
			printf("%2d",fib(k++));
		}
		printf("\n");
	}
	
}
int fib(int x){
	if(x<=1)
	return 1;
	else
	return fib(x-1)+fib(x-2);
}
