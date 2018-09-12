#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char * astrcpy(char str1[],char str2[])
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
	}
  str1[i]='\0';
  return str1;
}

char * pstrcpy(char *str1,char *str2)
{
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
	return str1;
}



int astrcmp(char str1[],char str2[])
{
	int i;
	while(str1[i]!='\0'&&str2[i]!='\0'&& str1[i]==str2[i])
	i++;
	if(str1[i]==str2[i])
	  return 0;
	else
	return str1[i]-str2[i];
}
int pstrcmp(char *str1,char *str2)
{
	
	int i;
	while(*str1!='\0'&&*str2!='\0'&& *str1==*str2)
	str1++;
	str2++;
	if(*str1==*str2)
	  return 0;
	else
	return *str1-*str2;
}

int  astrlen(char *str)
{   int i=0;
	while(str[i]!='\0'){
     	i++;
     	           }
    return i;
}
int pstrlen(char *str)
{
	 char *start = str;
	 while(*str!='\0')
	 {
	 	str++;
	 }
	return (str-start);
}

int main() {
	char ch[20]="My Name";int i;
	char ph[10]="my name";
	
	char *p;
	p=ch;
	printf("%s  ",astrcpy(ch,ph));
	printf("%s\n",pstrcpy(ch,ph));
	
	printf("%d  ",astrcmp(ch,ph));
	printf("%d\n",pstrcmp(ch,ph));
	printf("%d\n",pstrlen(ch));
	while(*p!='\0')
	{
		printf("%c  ", *p);
		printf("%u\n",p);
		p++;
	}
	for(i=0;i<astrlen(ch);i++)
	{
		printf("%u    ",ch[i]);	
		printf("%c   ",ch[i]);
	    printf("%u\n",&ch[i]);
}
	printf("%u\n","good");
	printf("%u","bad");
	if("bad"=="bad")
	printf("same\n");
	else
	printf("not same");
	printf("Hello \0 word");
	printf("%d\n",sizeof("Hello \0 word"));
	printf("%d\n",strlen("Hello \0 word"));
	return 0;
}
