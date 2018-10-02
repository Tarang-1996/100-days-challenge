#include<stdio.h>
void main(){
	int i,j,top=9,low=0,n=1;
	int a[10][10];
	for(i=0;i<=5;i++,top--,low++)
	{
		for(j=low;j<=top;j++,n++)
		{
			a[i][j]=n;
		}
		for(j=low+1;j<=top;j++,n++)
		{
			a[j][top]=n;
		}
		for(j=top-1;j>=low;j--,n++)
		{
			a[top][j]=n;
		}
		for(j=top-1;j>low;j--,n++){
			a[j][low]=n;
		}
	}
	for(i=0;i<=9;i++)
	{
		        printf("\n\n\t");

		for(j=0;j<=9;j++){
			printf(" %d ",a[i][j]);
		}
		
	}
}
