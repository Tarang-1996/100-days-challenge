#include<stdio.h>
int gcd(int x,int y)
{
	if(x==0 || y==0)
	return 0;
	else if(x==y)
	return x;
	else if(x>y)
	      return(x-y,y);
	return(x,y-x);

}
void main(){
	int x,y,lcm;
	scanf("%d%d",&x,&y);
	printf("%d",gcd(x,y));
	lcm=(x*y)/gcd(x,y);
	printf("lcm= %d",lcm);
	
	
}
