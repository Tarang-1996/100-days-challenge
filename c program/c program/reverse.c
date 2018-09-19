#include<stdio.h>
#include<string.h>

char* reverse(char str[])
{
	int n,i=0;
	char btr[10];
	n=strlen(str)-1;
	while(n>=0)
	{
		btr[i]=str[n];
		
		i++;
		n--;
	  } 
	  puts(btr); 
	  return btr;
}
int main()
{
	char str[10],*rtr;
	gets(str);
	rtr=reverse(str);
	puts(rtr);
	
	
	return 0;
	
}
