#include<stdio.h>
void main(){
	int arr[5];
	int i,e,j,max=0,flag=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		j=2;
		while(j<=arr[i]/2){
			if(arr[i]%j==0)
			{
				flag++;
			}
				j++;
		}
		if(flag==0){
		
			if(max<arr[i])
				{
					max=arr[i];
				}
	    }
	}
	printf("%d",max);
	
}
