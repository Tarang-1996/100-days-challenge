#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,j,i;
	char str[10];
	gets(str);
	j=strlen(str)-1;
	while(str[i]!='\0')
	{
		str[i]=str[i]-32;
		i++;
    }
    puts(str);
		
	
}
