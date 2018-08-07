#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,num,arr[num],temp;
    int j,mid,maxcount=0,count=0,maxvalue,brr[num],c=0,k=0,min=0;
    long sum=0;
    float mean,mode,median;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num-1;i++)
    {
        sum=sum+arr[i];
    }
        mean=sum/num;
    printf("%.1f",mean);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    mid=num/2;
    median=(arr[mid]+arr[mid+1])/2;
    printf("\n%.1f",median);
    for (i = 0; i < num; ++i) {
      for (j = 0; j < num; ++j) {
            if (arr[j] == arr[i])
             ++count;   }
      if (count >maxcount) {
         maxcount = count;
         maxvalue = arr[i]; }
    else if (count == maxcount) {
            brr[k] = arr[i];
            k++;} }
        for (i = 0; i <num; i++){
        if (arr[i] == brr[i]) 
            c++;}
        if (c == num)
            printf("\n %d",arr[0]);
        else
        {
            min=brr[0];
            for (i = 0; i < k; i++)
            {
                if (min<brr[i])
                    min=brr[i];
            }
                printf("\n%d ",brr[i]);
        }
        return 0;
}

