#include<stdio.h>
void main(){
	int i,rem,div;
	for(i=0;i<=1000;i++)
	{
			div = i;	
		while(div>0){
			
		
			 rem=i%10;
			 if(rem==1 || rem==7)
			 {
			 	printf("%d\n",i);
			 	break;
			 }
			 else
			 {
			 	div=div/10;
			 	if(div==7|| div==1)
			 	{
			 		printf("%d\n",i);
			 		break;
				 }
			 }
		
	}
}
}
