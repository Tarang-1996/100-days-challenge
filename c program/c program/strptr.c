#include<stdio.h>

int main()
{
	int i,j;
	char *temp;
	char *ptr[]={
	              "Tarang",
				  "Umang",
				  "Harshit",
				  "Sakshi"};
	char *str;
 for(i=0;i<4;i++){
				  
printf("\naddress of array %u",ptr[i]);
 printf("\naddress of adress of array %d",ptr+i);
 printf("\nvalue of array %s\n",ptr[i]);
}
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
for(i=0;i<4;i++){

for(j=i+1;j<4;j++)

{
	if(strcmp(ptr[i],ptr[j])>0)
	{
		temp=ptr[j];
		ptr[j]=ptr[i];
		ptr[i]=temp;
	}
	
}
}
printf("after the sorting");
for(j=0;j<4;j++)
{
 printf("\naddress of array %u",ptr[j]);
 printf("\naddress of adress of array %d",ptr+j);
 printf("\nvalue of array %s\n",ptr[j]);
}
 return 0;
 }
