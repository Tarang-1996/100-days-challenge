#include<stdio.h>
void main(){
	int i,j,top=4,low=0,n=1,arr[10][10];
	for(i=0;i<=4;i++)
	{
		
		for(j=0;j<=4;j++)
		{
			arr[i][j]=0;
		}
	}
	for(i=0;i<=low;i++){
		for(j=low;j<=top;j++,n++)
		{
			arr[i][j]=n;
		}
		for(j=low+1;j<=top;j++,n++)
		{
			arr[j][top]=n;
		}
		for(j=top-1;j>=low;j--,n++)
		{
			arr[top][j]=n;
		}
		for(j=top-1;j>low;j--,n++)
		{
			arr[j][top]=n;
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("\n\n\t");
		for(j=0;j<=4;j++)
		{
			printf("%d",arr[i][j]);
		}
	}
	
}
