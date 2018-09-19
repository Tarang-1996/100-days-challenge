// space optimized method
#include<stdio.h>
void main(){
	int i=0,j=1,k,n,l;
	printf("enter the length of series");
	scanf("%d",&n);
	printf("%d %d",i,j);
	for(l=0;l<n;l++)
	{
		k=i+j;
		i=j;
	    j=k;
		printf(" %d",j);
	}
}// time complexity is O(n) space complexity is also O(1).
