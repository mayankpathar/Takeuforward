// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same
#include<stdio.h>

int main(){
     int m, k =m;
    printf("enter the value of arr size:");
    scanf("%d", &m);
    int nums[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter the value of arr element: ");
        scanf("%d", &nums[i]);

    }
    for (int i = 0; i < m; i++)
    {
        if (nums[i]==0)
        {
            for (int j = i; j < m; j++)
            {
               nums[j]=nums[j+1];
                
            }
            nums[m-1]=0;
            
        }
        
    }
      for (int i = 0; i < m; i++)
    {
        printf("%d",nums[i]);

    }
    return 0;
}