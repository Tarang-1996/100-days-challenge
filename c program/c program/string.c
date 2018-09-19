#include<stdio.h>
#include<string.h>
void main(){
	char str[500],count=0,i=0,len,max=0,j,k;
	printf("Enter the paragraph");
	gets(str);
	printf("max length str=%d\n",strlen(str));
	
	while(i<strlen(str))
	{
		j=i;
		len=0;
	while(str[j]!=' '&& j<strlen(str))
		  {
		  	len++;
		  	j++;
		  }
		  if(len>max){
		  max=len;
		  k=i;
	      }
	    i=j+1;
	 
	}
	    
		printf("max length word=%d",max);
		printf("%d",k);
		while(str[k]!=' ')
		{
			printf("%c",str[k]);
			k++;
		}
	
	
}
