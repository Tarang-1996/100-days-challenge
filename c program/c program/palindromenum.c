#include<stdio.h>
void main(){
	int i,rem,div,n,rev=0;
	scanf("%d",&n);
	div=n;
	while(div>0)
	{
		rem=div%10;
		rev=rem+rev*10;
		div=div/10;
	}
	if(n==rev)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("No is not palindrome");
	}
}
