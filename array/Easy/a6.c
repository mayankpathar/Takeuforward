// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
#include<stdio.h>

int main(){
     int m;
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
        int count = 0;

        for (int j = 0; j < m; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("Number appeared once: %d", nums[i]);
            break;
        }
        
    }
    
    return 0;
}