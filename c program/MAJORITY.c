#include<stdio.h>
#include<conio.h>
int argc,a[10],j,c=1,b[10],i=0,j,k;

void main()
{
	
	scanf("%d",&argc);                            
	for(j=0;j<argc;j++)
	{
		scanf("%d",&a[j]);				
		}
		for(j=0;j<argc;j++)
	{
				a[i]=a[j];
				
			if(a[i]==a[j])
			
			{
				c++;
			}
			
			else
			{
				c--;
			}
if(c==0)
{

i=j;
c=1;
		
}
	
}	
printf("%d",a[i]);
getch();
}

