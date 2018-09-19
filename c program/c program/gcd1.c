// gcd 
#include<stdio.h>
void main(){
	int x,y,i;
	int min;
	scanf("%d%d",&x,&y);
	
	min= (x<y)?x:y;
	for(i=2;i<=min;i++)
{
	
	if(x%i==0 && y%i==0)
	{
		printf("%d",i);
		break;
		
	}
}}
