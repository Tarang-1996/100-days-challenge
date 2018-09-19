#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	 return a;
	return gcd(b,a%b);
	
}
void main()
{
	int x,y,arr[10],i,n,result;
	//scanf("%d%d",&x,&y);
	//printf("%d",gcd(x,y));
    printf("enter the element in array");
    scanf("%d",&n);
	for	(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=arr[0];
	for(i=1;i<n;i++)
	{
		result=gcd(arr[i],result);
	}
	printf("%d",result);
}
