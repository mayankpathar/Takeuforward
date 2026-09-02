// Given a binary array nums, return the maximum number of consecutive 1s in the array.
#include<stdio.h>

int main(){
    int M,count=1,k=1;
    printf("enter the value of arr size:");
    scanf("%d",&M);
    int nums[M];
    for (int i = 0; i < M; i++)
    {
       printf("enter the value of arr element: ");
       scanf("%d",&nums[i]);
    }
   for (int i = 0; i < M; i++)
   {
    if (1==nums[i]==nums[i+1])
    {
        count++;
       
    }
    if (count>=k)
    {
       k= count;
    }
    count=1;
    
   }
   
   
   printf("%d",k);
   

    return 0;
}
