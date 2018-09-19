// recursive method

#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fibo(n-1)+fibo(n-2)); 
}
void main()
{
	int n,i;
	scanf("%d",&n);
for(i=0;i<n;i++)
	{
		printf(" %d",fibo(n));
}
	
}//time complexity T(n-1)+T(n-2) space complexity O(n)
