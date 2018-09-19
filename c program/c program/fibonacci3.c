// dynamic programming method
#include<stdio.h>
int fibo(int n)
{
	int i,fib[n+2];
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	return fib[n];
}
void main()
{
	 int j;
	 scanf("%d",&j);
	 printf("%d",fibo(j));
	
}
