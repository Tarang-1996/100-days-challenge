#include<stdio.h>
void main()
{  
  int num,arr[num],i,j,k=0,brr[num],crr[num],count=1,l=0,sum=0,total=0;
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("%d",&num);
  for(i=0;i<num;i++)
  {
    printf("%d",arr[i]);
  }
  for(i=0;i<num;i=i+2)
  {
   			 
      			 if(arr[i]==arr[i+1])
                 {
                   count++;
                   if(count==2)
                   {
                     brr[k]=arr[i];
                     sum++;
                     k++;
                   }
                 }
 }
  while(sum==1)
  {
  total = total+sum;
    sum=sum-1;
  
  }
  printf("%d",&total);
  }