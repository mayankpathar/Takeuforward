// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
#include <stdio.h>

int main()
{
    int m, k, n;
    printf("enter the value of arr size:");
    scanf("%d", &m);
    int nums[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter the value of arr element: ");
        scanf("%d", &nums[i]);
    }
    printf("arr rotate left by k step and non-negative integer k: ");
    scanf("%d", &k);
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < m; i++)
        {

            if (i==0)
            {
                n = nums[i];
            }
            
            nums[i] = nums[i + 1];
            
        }
        nums[m - 1] = n;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d", nums[i]);
    }
    return 0;
}