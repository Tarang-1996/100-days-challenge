#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,j,i;
	char str[10];
	gets(str);
	j=strlen(str)-1;
	while(i<=j)
	{
		if(str[i]==str[j])
		{
			flag=1;
		}
		else{
			flag=0;
			break;
		}
		i++;
		j--;
		
	}
	if(flag==1)
	{
		printf("word is palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	getch();
}
