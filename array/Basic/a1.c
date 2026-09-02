// Given an array of integers nums, return the value of the largest element in the array
#include<stdio.h>

int main(){
    int M;
    printf("enter the value of arr size:");
    scanf("%d",&M);
    int nums[M];
    for (int i = 0; i < M; i++)
    {
       printf("enter the value of arr element: ");
       scanf("%d",&nums[i]);
    }
    int largestelement=nums[0];
    for (int i = 0; i < M; i++)
    {
       if (nums[i]>largestelement)
       {
        largestelement=nums[i];
       }
       
    }
    printf("%d",largestelement);
    
    return 0;
}


