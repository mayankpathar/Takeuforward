// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.
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
    int flag=0;
    for (int i = 0; i < M-1; i++)
    {
        if(nums[i]>nums[i+1]){
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("true");
    }else{
         printf("false");
    }
    
    
}